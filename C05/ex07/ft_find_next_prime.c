/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:25:07 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 16:01:51 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (i);
	else if (nb == 2 || nb == 3 || nb == 5 || nb == 7 || nb == 11 || nb == 13)
		return (nb);
	else
	{
		while (((nb % i) != 0) && (i <= nb))
			i++;
		if (i == nb)
			return (nb);
		else
			return (ft_find_next_prime(nb + 1));
	}
}

/* int main()
{
	int c;
	
	c = ft_find_next_prime();
	// write(1, &c, 1);
	printf("%d\n", c);
	return (0);
} */
