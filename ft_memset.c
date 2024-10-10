/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:56:14 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/10 12:22:47 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
*/
//This main does not test for the behavior with non printable characters

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	b1[15] = "Hello world";
	char	b2[15] = "Hello world";
	int		c = 56;
	size_t	len = 4;

	printf("you: %s, memcpy: %s", ft_memset(b1, c, len), memset(b2, c, len));
	return (0);
}
*/
