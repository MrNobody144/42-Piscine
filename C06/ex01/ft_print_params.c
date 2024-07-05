/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:31:50 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 09:31:52 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	q;

	i = 0;
	q = -1;
	while (++i < argc)
	{
		while (argv[i][++q] != '\0')
			write(1, &argv[i][q], 1);
		q = -1;
		write(1, "\n", 1);
	}
	return (0);
}
