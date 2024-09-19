/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:38:32 by alazizi           #+#    #+#             */
/*   Updated: 2024/09/07 17:39:57 by alazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	while (x++ != 98)
	{
		y = x;
		while (y++ != 99)
		{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			ft_putchar(' ');
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
