/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/26 12:36:46 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	printable;

	i = -1;
	printable = 1;
	while (str[++i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			printable = 1;
		else
			return (0);
	}
	return (printable);
}

/* int	main()
{
	char	alpha[5] = "\n\n";

	int c = ft_str_is_printable(alpha) + 48;
	write(1, &c, 1);
	return (0);
} */
