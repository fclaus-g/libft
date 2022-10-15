/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n2 <n2@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:25:33 by n2                #+#    #+#             */
/*   Updated: 2022/10/13 12:54:10 by n2               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	cpy;

	cpy = 0;
	if (dstsize > 0)
	{
		while (src[cpy] != '\0' && cpy < dstsize)
		{
				dst[cpy] = src[cpy];
				cpy++;
		}
		dst[cpy] = '\0';
	}
	return (ft_strlen(dst));
}
