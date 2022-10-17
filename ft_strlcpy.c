/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclaus-g <fclaus-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:05:25 by fclaus-g          #+#    #+#             */
/*   Updated: 2022/10/03 15:32:47 by fclaus-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	copier;
	size_t	lenght;

	lenght = 0;
	copier = 0;
	while (src[lenght] != '\0')
		lenght++;
	if (dstsize > 0)
	{
		while (src[copier] != '\0' && copier < dstsize - 1)
		{
			dst[copier] = src[copier];
			copier++;
		}
		dst[copier] = '\0';
	}
	return (lenght);
}
/* error de bus aprentemente en el main y lo mas probable en el printf
 int main(void)
 {
	char *dst;
	const char *src;
	size_t	dstsize;
	char	*prueba;
	
	dst = "aaaaaaaaaaa ";
	src = "maquina";
	dstsize = 1;
	ft_strlcpy(dst, src, 5);
	prueba = dst;
	return (0);
 }*/ 