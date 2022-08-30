/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:33:34 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/23 12:06:30 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_write_comb(int e, int f, bool last)
{
	ft_putchar('48' + e / 10);
	ft_putchar(48 + e % 10);
	ft_putchar(' ');
	ft_putchar(48 + f / 10);
	ft_putchar(48 + f % 10);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		e;
	int		f;
	bool	last;

	e = 0;
	while (e <= 99)
	{
		f = e + 1;
		while (f <= 99)
		{
			last = !(e == 98 && f == 99);
			ft_write_comb(e, f, last);
			f++;
		}
		e++;
	}
}
