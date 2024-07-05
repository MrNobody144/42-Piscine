/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:36:32 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/15 12:23:47 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	while ((a <= '9') && !(a > '9'))
	{
		d = b + 1;
		if (b > '8')
		{
			b = '0';
			a++;
		}
		c = '0';
		while (c <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, ", ", 2);
			d++;
			if (d > '9')
			{
				d = '0';
				c++;
			}
			else if (d == b)
				d++;
		}
	}
	b++;
}

int main()
{
	ft_print_comb2();
	return 0;
}
