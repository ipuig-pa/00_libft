/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:55:41 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/08 11:15:45 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isupper(int c)
{
	return ((unsigned char)c >= 'A' && (unsigned char )c <= 'Z');
}

int	ft_islower(int c)
{
	return ((unsigned char)c >= 'a' && (unsigned char)c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

/*
int	main(void)
{
	int	c;

	c = 123;
	printf("%d", ft_isalpha(c));
	printf("%d", isalpha(c));
	return (0);
}
*/
