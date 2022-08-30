/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:22:25 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/22 21:10:59 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	e;
	char	f;
	char	g;

	e = '0';
	while (e <= '7')
	{
		f = e;
		while (++f <= '8')
		{
			g = f + 1;
			while (g <= '9')
			{
				ft_putchar(e);
				ft_putchar(f);
				ft_putchar(g);
				if (e != '7' || f != '8' || g != '9')
				{
					write(1, ", ", 2);
				}
				g++;
			}
		}
		e++;
	}
}
