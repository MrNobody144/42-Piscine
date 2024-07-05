/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:17:23 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 14:58:39 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if ((nb == 1) || (power == 0))
		return (1);
	else if (nb == -1 && power == 2147483647)
		return (-1);
	else if (nb == 0)
		return (0);
	else
	{
		while (--power > 0)
			result *= nb;
	}
	return (result);
}

/* int main()
{
	int c;
	
	c = ft_iterative_power(2, 4) + 48;
	write(1, &c, 1);
	return (0);
} */
