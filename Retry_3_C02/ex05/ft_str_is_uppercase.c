/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/26 12:36:33 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	uppercase;

	i = -1;
	uppercase = 1;
	while (str[++i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			uppercase = 1;
		else
			return (0);
	}
	return (uppercase);
}

/* int	main()
{
	char	alpha[] = "";

	int c = ft_str_is_lowercase(alpha) + 48;
	write(1, &c, 1);
	return (0);
} */
