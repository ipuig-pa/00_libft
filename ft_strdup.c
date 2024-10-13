/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:46:41 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/13 12:32:46 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s1);
	p = (char *)malloc(len + 1);
	if (p == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	p = (char *)ft_memcpy((void *)p, (const void *)s1, len + 1);
	return (p);
}
