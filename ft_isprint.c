/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:22:22 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/09 09:32:59 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isprint(int c)
{
	return ((unsigned char)c >= 32 && (unsigned char)c <= 126);
}

/*
int	main(void)
{
	int	c;

	c = -3;
	printf("int:%d,", c);
	printf("you:%d,", ft_isprint(c));
	printf("isprint:%d. ", isprint(c));
	c = -1;
	printf("int:%d,", c);
	printf("you:%d,", ft_isprint(c));
	printf("isprint:%d. ", isprint(c));
	c = 0;
	printf("int:%d,", c);
	printf("you:%d,", ft_isprint(c));
	printf("isprint:%d. ", isprint(c));
	c = 31;
	printf("int:%d,", c);
	printf("you:%d,", ft_isprint(c));
	printf("isprint:%d. ", isprint(c));
	c = 32;
	printf("int:%d,", c);
	printf("you:%d,", ft_isprint(c));
	printf("isprint:%d. ", isprint(c));
	c = 126;
	printf("int:%d,", c);
	printf("you:%d,", ft_isprint(c));
	printf("isprint:%d. ", isprint(c));
	c = 127;
	printf("int:%d,", c);
	printf("you:%d,", ft_isprint(c));
	printf("isprint:%d. ", isprint(c));
	return (0);
}
*/
