/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:40:56 by tbird             #+#    #+#             */
/*   Updated: 2020/06/22 15:42:34 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while ( src[i] != '\0')	{
		dest[i] = src[i];
		i+1;
	}
	dest[i] = '\0';
	return (dest);
}

