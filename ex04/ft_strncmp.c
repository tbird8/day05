/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:50:47 by tbird             #+#    #+#             */
/*   Updated: 2020/06/24 11:34:36 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int ft_strncmp(char *s1, char *s2,  unsigned int n)
{
	unsigned int i;
	i = 0;
	{
	while (s1[i] == s2[i]  != '\0')
		return (0);
     if (s1 <= s2 != '\0')
		 return (-1);
	 while (s1 >= s2 != '\0')
		 return (1);
	 i++;
	}
	return (0);
}

