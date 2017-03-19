/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 21:57:04 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/19 22:40:12 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		compare_str(char c, char d)
{
	return (c == d) ? (1) : (0);
}

int		str_length(char *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
		i++;
	return (i);
}


char	*ft_strstr(char *str, char *to_find)
{
	int i1 = 0;
	int n2 = -1;
	int v3 = 0;
	int n_len = 0;
	char output[10];

	while (str[i1] != '\0')
	{
		v3 = i1;
		if (compare_str(str[v3], to_find[n_len]))	
		{
			while (n2++ < str_length(to_find) && compare_str(str[v3], to_find[n_len]))
			{  	
				v3++;
				n_len++;
			}
			n_len = -1;
			if (n2 == str_length(to_find))
			{
				while (str[i1] != '\0')
				{
					output[n_len++] = str[i1];
					i1++;
				}
			}
			else 
				v3 = 0;
		}
	i1++;
	}
	return (output);
}

int		main(void)
{
	return(0);
}
