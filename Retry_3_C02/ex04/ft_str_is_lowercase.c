/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/26 12:36:24 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lowercase;

	i = -1;
	lowercase = 1;
	while (str[++i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			lowercase = 1;
		else
			return (0);
	}
	return (lowercase);
}

/* int	main()
{
	char	alpha[] = "abcdefghijkl";

	int c = ft_str_is_lowercase(alpha) + 48;
	write(1 ,&c, 1);
	return (0);
} */
