/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:22:48 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 10:54:44 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb < 0 || nb == 2147483647)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	else
	{
		while ((i * i) != nb)
		{
			if ((i * i) >= nb)
				return (0);
			i++;
		}
		return (i);
	}
}

/* int main()
{
	int c;
	
	c = ft_sqrt(144) + 48;
	write(1, &c, 1);
	return (0);
} */
