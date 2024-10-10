/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:19:37 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/10 17:18:52 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (len < needle_len)
		return (NULL);
	while (i < (len - needle_len + 1) && haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j] && needle[j] != '\0')
			j++;
		if (j == needle_len)
			return ((char *)haystack + i);
		else
			i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	hay[] = "Helloo world!";
	char	ne[] = "o w";
	size_t	len = 3;

	printf("you: %p, strnstr: %p", ft_strnstr(hay, ne, len), strnstr(hay, ne, len));
	return (0);
}*/