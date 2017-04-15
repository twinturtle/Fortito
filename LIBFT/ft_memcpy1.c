/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:38:28 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/15 11:56:40 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void			*ft_memcpy1(void *restrict dst,
				const void *restrict src, size_t n)
{
	const char	*src_str;
	char		*dst_str;
	size_t 		a;
	size_t 		b;
	size_t 		c;
	a = sizeof(src) ;
	b = *(&src + 1) - src ;
	c = sizeof(src) / sizeof(char);
	printf("sizeof src-------> %zu\n", a);
	printf("sizeof src-------> %zu\n", b);
	printf("sizeof src-------> %zu\n", c);
	printf("adresse src------> %p\n", src);
	src_str = src;
	dst_str = dst;
	while (n > 0)
	{	
		*dst_str++ = *src_str++;
		n--;
	}
	return (dst);
}
