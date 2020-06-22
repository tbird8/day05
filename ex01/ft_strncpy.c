/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:43:06 by tbird             #+#    #+#             */
/*   Updated: 2020/06/22 16:21:47 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i =0;
	while (src [i] != '\0'){
		dest[i] = src [i];
		i+1;
	}
	dest [i] = '\0';;
	return (dest);
	ft_strncpy;
}	

int main(void)
{ 
	char str1[7] = "buffer";
	char str2[7];
	strncpy(str2, str1, 5);
	printf("%s\n", strcpy(str2, str1));
	printf("%s\n", str2);
			return (0);
			}

