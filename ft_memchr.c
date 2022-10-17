/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclaus-g <fclaus-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:07:26 by fclaus-g          #+#    #+#             */
/*   Updated: 2022/10/11 13:16:28 by fclaus-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				count;
	unsigned char	*string;
	unsigned char	c2;

	count = 0;
	string = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (count < n)
	{
		if (string[count] == c2)
			return (&string[count]);
		count++;
	}
	return (0);
}
