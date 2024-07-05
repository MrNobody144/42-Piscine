/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/19 11:17:21 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	max;

	i = -1;
	while (i++ < (size / 2 - 1))
	{
		max = size - i - 1;
		temp = tab[max];
		tab[max] = tab[i];
		tab[i] = temp;
	}
}

/* int	main()
{
	int	nums[7] = {40, 41, 42, 43, 44, 45};

	ft_rev_int_tab(nums, 6);
	return (0);
} */
