/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:08:41 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/11 17:21:08 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

static int	get_num_len(int n)
{
	int	n_len;

	n_len = 0;
	if (n <= 0)
		n_len = 1;
	while (n != 0)
	{
		n = n / 10;
		n_len++;
	}
	return (n_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_len;
	long	n_c;

	n_len = get_num_len(n);
	str = (char *)malloc(n_len + 1);
	if (str == NULL)
		return (NULL);
	str[n_len] = '\0';
	n_c = n;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n_c = -n;
	}
	while (n_c != 0)
	{
		str[n_len - 1] = '0' + (n_c % 10);
		n_len--;
		n_c = n_c / 10;
	}
	return (str);
}

/*int	main(void)
{
	int	n = -452356531;

	printf("%d: %s", n, ft_itoa(n));
	return (0);
}*/