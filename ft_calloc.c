/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:15:13 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/13 13:23:14 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	size_t			total_size;

	if (count == 0 || size == 0)
		total_size = 1;
	else if (count > SIZE_MAX / size)
	{
		errno = ENOMEM;
		return (NULL);
	}
	else
		total_size = count * size;
	p = (void *)malloc(total_size);
	if (p == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(p, total_size);
	return (p);
}
