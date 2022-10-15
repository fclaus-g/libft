/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n2 <n2@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:27:33 by n2                #+#    #+#             */
/*   Updated: 2022/10/10 19:26:41 by n2               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;
	char	*copy;

	count = 0;
	copy = (char *)s;
	while (count <= ft_strlen(copy))
	{
		if (copy[count] == (char)c)
		{
			return (&copy[count]);
		}
	count++;
	}
	return (0);
}
