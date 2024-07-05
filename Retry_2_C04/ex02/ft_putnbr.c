/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:08:20 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 16:57:50 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		result;
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb *= -1;
	}
	if (lnb >= 0 && lnb < 10)
	{
		result = lnb + 48;
		write(1, &result, 1);
	}
	else
	{
		ft_putnbr(lnb / 10);
		result = (lnb % 10) + 48;
		write(1, &result, 1);
	}
}

/* int main()
{
	ft_putnbr(+12345);
	return (0);
} */
