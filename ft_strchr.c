/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclaus-g <fclaus-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:37:25 by fclaus-g          #+#    #+#             */
/*   Updated: 2022/10/04 11:04:45 by fclaus-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;
	char	*x;

	count = 0;
	x = (char *)s;
	while (count <= ft_strlen(x))
	{
		if (x[count] == (char)c)
			return (&x[count]);
		count++;
	}
	return (0);
}
/*
int main() 
{
    const char *str = "heea";
    char  c;
   
    c = 'a';
    printf("Found letter:%c\n", *ft_strchr(str, c));
   
    return (0);
}*/