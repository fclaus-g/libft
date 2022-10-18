/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n2 <n2@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:47:23 by n2                #+#    #+#             */
/*   Updated: 2022/10/18 17:53:17 by n2               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	unsigned int		count;
	size_t	c2;

	count = 0;
	sub = (char*)malloc(sizeof(char) * (len + 1));
	if (s == 0)
		return (0);
	if (sub == 0)
		return (0);
	while (count < len && start < ft_strlen(s))
	{
		sub[count] = s[start + count];
		count++;
	}
	sub[count] = '\0';
	return (sub);
}
// int	main(void)
// {
// 	ft_substr ("helou my darling", 6, 2);
// 	return (0);
// }
