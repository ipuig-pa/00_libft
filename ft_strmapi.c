/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:22:07 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/11 17:53:05 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	ft_toupper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_f;
	unsigned int	i;
	size_t			s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	s_f = (char *)malloc(s_len + 1);
	if (s_f == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		s_f[i] = f(i, s[i]);
		i++;
	}
	s_f[i] = '\0';
	return (s_f);
}

/*int	main(void)
{
	char	s[]="Hello World!";

	printf("before: %s: after: %s", s, ft_strmapi(s, ft_toupper));
	return (0);
}*/
