/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:35:47 by tbird             #+#    #+#             */
/*   Updated: 2020/06/24 12:59:52 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char  *ft_strupcase(char *str)
{
	int i;
	i = 0;
   {
	   while (str[i]   != '\0')
		   if ( str[i] -= 'a' - 'A')
			   i++;
		   return (str);
   }
 return (0);
}
