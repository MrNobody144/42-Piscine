/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:02:54 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/12 10:42:54 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	c;

	c = '`';
	while (c++ < 'z')
		write(1, &c, 1);
}

/* int	main(void)
{
	ft_print_alphabet();
	return 0;
} */
