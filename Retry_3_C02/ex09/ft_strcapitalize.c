/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/24 13:26:46 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check_char(char *str, int i)
{
	if (str[i] > 96 && str[i] < 123)
	{
		if (i == 0)
			str[i] -= 32;
		else if (str[i - 1] > 47 && str[i - 1] < 58)
			str[i] = str[i];
		else if (str[i - 1] > 64 && str[i - 1] < 91)
			str[i] = str[i];
		else if (str[i - 1] > 96 && str[i - 1] < 123)
			str[i] = str[i];
		else
			str[i] -= 32;
	}
	else if (str[i] > 64 && str[i] < 91)
	{
		if (str[i - 1] > 47 && str[i - 1] < 58)
			str[i] += 32;
		else if (str[i - 1] > 64 && str[i - 1] < 91)
			str[i] += 32;
		else if (str[i - 1] > 96 && str[i - 1] < 123)
			str[i] += 32;
		else
			str[i] = str[i];
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		ft_check_char(str, i);
	return (str);
}

/* int	main(void)
{
	char	alpha[] = "salut, comment tu vas ? 42mots quarante-deux";

	char *c = ft_strcapitalize(alpha);
	write(1, c, 60);
	return (0);
} */
