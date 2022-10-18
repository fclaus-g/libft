/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n2 <n2@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:54:04 by n2                #+#    #+#             */
/*   Updated: 2022/10/18 20:32:02 by n2               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	count;
	size_t	c2;
	char	*s3;
	size_t	len;
	
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	count = 0;
	s3 = (char*)malloc(sizeof(char) * len);
	if (s1 == 0 || s2 == 0)
        return (0);
	while(count < ft_strlen(s1))
	{
		s3[count] = s1[count];
		count++;
	}
	c2 = 0;
	while (c2 < ft_strlen(s2))
	{
			s3[count + c2] = s2[c2];
			c2++;
	}
	
	s3[count + c2] = 0;
	return(s3);
}
	