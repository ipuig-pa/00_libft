/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:55:41 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/08 11:25:43 by ipuig-pa         ###   ########.fr       */
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

	c = -1;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 64;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 65;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 82;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 90;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 91;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 96;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 97;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 106;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 122;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	c = 123;
	printf("int:%d,", c);
	printf("you:%d,", ft_isalpha(c));
	printf("isalpha:%d. ", isalpha(c));
	return (0);
}
*/
