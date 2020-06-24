/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 13:30:42 by tbird             #+#    #+#             */
/*   Updated: 2020/06/24 13:41:03 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char  *ft_strlowcase(char *str)

{
	int i;
	i = 0;
	{
		while (str[i] != '\0')
			if ( str[i] -= 'A' - 'a')
				i++;
				return(str);
	}
	return(0);
}
int main()
{
	char str[10] = "GOODBYE";

	printf("%s\n", ft_strlowcase(str));
	return(0);
}
