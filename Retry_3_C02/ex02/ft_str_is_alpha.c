/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/30 09:23:56 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = -1;
	alpha = 1;
	while (str[++i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
			alpha = 1;
		else
			return (0);
	}
	return (alpha);
}

/* int	main()
{
	char	Alpha[] = "";

 	int c = ft_str_is_alpha(Alpha) + 48;
 	write(1, &c, 1);
	return (0);
} */
