/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:20:09 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 15:03:40 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if ((nb == 1) || (power == 0))
		return (1);
	else if ((nb == 1 || nb == -1) && power == 2147483647)
		return (nb);
	else if (nb == 0)
		return (0);
	else
	{
		result = ft_recursive_power(nb, (power - 1));
		nb *= result;
	}
	return (nb);
}

/* int main()
{
	int c;
	
	c = ft_recursive_power(2, 5) + 48;
	write(1, &c, 1);
	return (0);
} */
