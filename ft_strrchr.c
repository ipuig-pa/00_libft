/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:32:30 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/10 14:55:00 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//DELETE FT_STRLEN FROM HERE?!
/*#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "Hello World!";
	int 	c = 114;

	printf("you: %p, strrchr: %p", ft_strrchr(s, c), strrchr(s, c));
}*/
