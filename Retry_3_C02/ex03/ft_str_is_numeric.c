/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/26 12:36:10 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	i = -1;
	num = 1;
	while (str[++i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
			num = 1;
		else
			return (0);
	}
	return (num);
}

/* int	main()
{
	char	num[] = "01948987493";

	int c = ft_str_is_numeric(num) + 48;
	write(1, &c, 1);
	return (0);
} */
