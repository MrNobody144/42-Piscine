/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:32:45 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/31 16:43:28 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	swap(char **argv, int i, int q)
{
	int	temp;

	temp = argv[i][q + 1];
	argv[i][q + 1] = argv[i][q];
	argv[i][q] = temp;
	write(1, &argv[i][q], 1);
	write(1, "\n", 1);
	return (1);
}

int	main(int counter, char **argv)
{
	int	i;
	int	q;
	int	swapped;

	i = 0;
	q = -1;
	swapped = 0;
	while (++i < counter)
	{
		while (argv[i][++q] != '\0')
		{
			if ((argv[i][q] > argv[i][q + 1]) && (argv[i][q + 1] != '\0'))
				swapped = swap(argv, i, q);
			if ((swapped == 1) && (argv[i][q] == '\0'))
				q = -1;
		}
		q = -1;
	}
	return (0);
}
