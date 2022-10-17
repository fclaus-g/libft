/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclaus-g <fclaus-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:02:03 by fclaus-g          #+#    #+#             */
/*   Updated: 2022/10/07 15:54:19 by fclaus-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cpy;

	cpy = 0;
	if (!dst && !src)
		return (0);
	while (cpy < n)
	{
		((unsigned char *)dst)[cpy] = ((unsigned char *)src)[cpy];
		cpy++;
	}
	return (dst);
}
