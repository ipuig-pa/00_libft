/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:55:04 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/13 12:36:16 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//refer i repensar!!!!

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	size_t	i;
	size_t	j;
	size_t	n_str;

	if (s == NULL)
		return (NULL);
	n_str = 1;
	str = s;
	while (ft_strchr(str, (int)c) != NULL)
	{
		n_str++;
		str = ft_strchr(str, (int)c);
	}
	arr = (char **)malloc(n_str * sizeof(char *) + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < n_str)
	{
		arr[i] = ft_substr(s, j, (ft_strchr(str, (int)c) - j));
		if (arr[i] == NULL)
		{
			while (i > 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		j = ft_strchr(str, (int)c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
