/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:02:39 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/11 14:54:23 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stddef.h>*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = 0;
	while (start < s1_len && ft_strchr(set, (int)s1[start]) != NULL)
		start++;
	end = s1_len - 1;
	while (end > start && ft_strchr(set, (int)s1[end]) != NULL)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
/*
int	main(void)
{
	char	s1[] = "   s   Helloworld  1 1 1 ";
	char	set[] = " 1";

	printf("before: %s/n: after: %s", s1, ft_strtrim(s1, set));
}*/