/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:22:32 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/12 11:11:39 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	c;

	c = '/';
	while (c++ < '9')
		write(1, &c, 1);
}

/* int main()
{
	ft_print_numbers();
	return 0;
} */
