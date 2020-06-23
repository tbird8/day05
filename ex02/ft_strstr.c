/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:43:15 by tbird             #+#    #+#             */
/*   Updated: 2020/06/23 15:46:55 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char  *ft_strstr(char *str, char *to_find)
{ 
	int n;
	n = 0;
   char   *begin;
	   char *to_find_cp;
   begin = str;
   to_find_cp = to_find;
  {
   if (*to_find == '\0' && n < 0 )
	   return (str);
   while (*str != '\0')
   {
	   while (*to_find_cp == *str)
		   ++str;
			   ++to_find_cp;
   }
   if (*to_find_cp == '\0')
	   return (begin);
   str = begin + 1;
}
   return (0);
   }


