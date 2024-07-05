/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:32:08 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 09:32:10 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	q;

	q = -1;
	while (--argc > 0)
	{
		while (argv[argc][++q] != '\0')
			write(1, &argv[argc][q], 1);
		q = -1;
		write(1, "\n", 1);
	}
	return (0);
}
