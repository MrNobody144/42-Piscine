/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:29:15 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/30 15:39:20 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;

	i = -1;
	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	if (size == 0)
		return (size_src);
	while (++i < (size - 1))
	{
		if (size_src == 0)
			return (size_src);
		else if (i < size_src)
			dest[i] = src [i];
		else
		{
			dest[i] = '\0';
			return (size_src);
		}
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (size_src);
}

/* int	main()
{
	char	str_1[10];

	char	str_2[] = "World!";
	int x = ft_strlcpy(str_1, str_2, 10) + 48;
	write(1, &x, 1);
	return (0);
} */
