/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:15:37 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 10:29:16 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		result *= nb;
		i = ft_recursive_factorial(nb - 1);
		result *= i;
	}
	else
		return (0);
	return (result);
}

/* int main()
{
	int c;
	
	c = ft_recursive_factorial(4) + 48;
	write(1, &c, 1);
	return (0);
} */
