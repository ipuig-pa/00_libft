/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:19:18 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/08 11:41:14 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isdigit(int c)
{
	return ((unsigned char)c >= '0' && (unsigned char)c <= '9');
}

/*
int	main(void)
{
	int	c;

	c = -1;
	printf("int:%d,", c);
	printf("you:%d,", ft_isdigit(c));
	printf("isdigit:%d. ", isdigit(c));
	c = 0;
	printf("int:%d,", c);
	printf("you:%d,", ft_isdigit(c));
	printf("isdigit:%d. ", isdigit(c));
	c = 47;
	printf("int:%d,", c);
	printf("you:%d,", ft_isdigit(c));
	printf("isdigit:%d. ", isdigit(c));
	c = 48;
	printf("int:%d,", c);
	printf("you:%d,", ft_isdigit(c));
	printf("isdigit:%d. ", isdigit(c));
	c = 52;
	printf("int:%d,", c);
	printf("you:%d,", ft_isdigit(c));
	printf("isdigit:%d. ", isdigit(c));
	c = 57;
	printf("int:%d,", c);
	printf("you:%d,", ft_isdigit(c));
	printf("isdigit:%d. ", isdigit(c));
	c = 58;
	printf("int:%d,", c);
	printf("you:%d,", ft_isdigit(c));
	printf("isdigit:%d. ", isdigit(c));
}
*/
