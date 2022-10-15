/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n2 <n2@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:35:10 by n2                #+#    #+#             */
/*   Updated: 2022/10/13 12:54:53 by n2               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cpy;
	size_t	c;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	cpy = lendst;
	c = 0;
	if (dstsize <= lendst || dstsize == 0)
		return (dstsize + lensrc);
	while (src[c] && cpy < dstsize - lendst -1)
	{
		dst[cpy] = src[c];
		cpy++;
		c++;
	}
	dst[cpy] = '\0';
	return (lendst + lensrc);
}
