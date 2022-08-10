/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:30:34 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/08 12:25:52 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while (n * n <= nb && nb > 0)
	{
		if (n * n == nb)
			return (n);
		else if (n >= 46341)
			return (0);
		n++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_sqrt(9));
	return (0);
}
*/
