/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n2 <n2@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:34:34 by n2                #+#    #+#             */
/*   Updated: 2022/10/13 12:56:57 by n2               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	count;
	char	*last;
	char	*cpy;

	cpy = (char *)s;
	count = 0;
	last = 0;
	while (count < ft_strlen(cpy))
	{
		if (cpy[count] == (char)c)
			last = &cpy[count];
		count++;
	}
	if ((char)c == cpy[count])
		return (&cpy[count]);
	return (last);
}
