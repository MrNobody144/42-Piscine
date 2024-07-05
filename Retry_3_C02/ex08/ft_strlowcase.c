/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/22 14:44:39 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
	}
	return (str);
}

/* int	main()
{
	char	alpha[] = "ABCDEFGHIJK";
	ft_strlowcase(alpha);
	return (0);
} */
