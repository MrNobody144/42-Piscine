/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:24:11 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 09:24:13 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	else
	{
		while (((nb % i) != 0) && (i < nb))
			i++;
		if (i == nb)
			return (1);
		else
			return (0);
	}
}

/* int main()
{
	int c;
	
	c = ft_is_prime(11) + 48;
	write(1, &c, 1);
	return (0);
} */
