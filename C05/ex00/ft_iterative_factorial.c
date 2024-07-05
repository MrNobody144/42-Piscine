/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:13:37 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 10:27:40 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = nb;
	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0)
	{
		while ((nb - i) != 1)
		{
			result *= (nb - i);
			i++;
		}
	}
	else
		return (0);
	return (result);
}

/* int	main()
{
	int c;
	
	c = ft_iterative_factorial(1) + 48;
	write(1, &c, 1);
	return (0);
} */
