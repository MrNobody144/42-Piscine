/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 08:24:05 by jianliew          #+#    #+#             */
/*   Updated: 2024/02/01 13:56:29 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	count;
	int	i;

	count = -1;
	i = 0;
	while (base[++count] != '\0')
	{
		if (base[count] == 43 || base[count] == 45)
			return (0);
		while (base[++i] != '\0')
		{
			if ((base[i] == base[count]) && (i != count))
				return (0);
		}
		i = 0;
	}
	if (count == 0)
		return (0);
	else
		return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	lnbr;
	long int	bs_num;

	lnbr = nbr;
	bs_num = check_base(base);
	if (bs_num == 0)
		return ;
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr *= -1;
	}
	if (lnbr >= 0 && lnbr < bs_num)
		write(1, &base[lnbr], 1);
	else
	{
		ft_putnbr_base(lnbr / bs_num, base);
		write(1, &base[lnbr % bs_num], 1);
	}
}

/* int	main()
{
	ft_putnbr_base(-1100, "01");
	return (0);
} */
