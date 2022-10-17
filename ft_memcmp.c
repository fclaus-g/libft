/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclaus-g <fclaus-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:33:19 by fclaus-g          #+#    #+#             */
/*   Updated: 2022/10/14 18:21:47 by fclaus-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	int				count;
	int				c2;

	count = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (count < n)
	{
		if (string1[count] != string2[count])
		{
			c2 = (unsigned char)string1[count] - (unsigned char)string2[count];
			return (c2);
		}
		count++;
	}
	return (0);
}
