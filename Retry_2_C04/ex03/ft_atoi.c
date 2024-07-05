/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:38:07 by jianliew          #+#    #+#             */
/*   Updated: 2024/02/01 12:37:40 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			n *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = (result * 10) + (str[i] - 48);
		if (str[i + 1] < 48 || str[i + 1] > 57)
			return (result * n);
		i++;
	}
	return (result * n);
}

/* #include <stdio.h>

int	main(int counter, char **str)
{
	int c = counter = ft_atoi(str[1]);
	printf("%d\n", c);
	return (0);
} */
