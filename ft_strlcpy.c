/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:36:31 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/09 19:26:50 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ELIMINAR FT_STRLEN D'AQUI!!!

/*
#include <stdio.h>
#include <string.h>
*/

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	//test cases: size_t: 0, 4, 11, 12, 50
	char src[15] = "hello world";
	char dst_you[50];
	char dst_strlcat[50];
	size_t dstsize = 0;

	printf("you: %zu, %s;", ft_strlcpy(dst_you, src, dstsize), dst_you);
	printf("strlcat: %zu, %s", strlcpy(dst_strlcat, src, dstsize), dst_strlcat);
	return (0);
}
*/