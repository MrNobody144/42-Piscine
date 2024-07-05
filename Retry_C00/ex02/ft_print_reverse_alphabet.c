/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:11:31 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/12 10:43:23 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = '{';
	while (c-- > 'a')
		write(1, &c, 1);
}

/* int	main()
{
	ft_print_reverse_alphabet();
	return 0;
} */
