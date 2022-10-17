/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclaus-g <fclaus-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:44:12 by fclaus-g          #+#    #+#             */
/*   Updated: 2022/10/14 19:04:57 by fclaus-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		count;
	size_t		len;
	char		*copy;

	count = 0;
	len = ft_strlen(s1);
	copy = malloc(sizeof((*s1) * (len)));
	while (count <= len)
	{
		copy[count] = s1[count];
		count++;
	}
	copy[count] = '\0';
	return (copy);
}

// int	main(void)
// {
// 	const char *s1 = "tabataba";

// 	ft_strdup(s1);
// 	return (0);
// }