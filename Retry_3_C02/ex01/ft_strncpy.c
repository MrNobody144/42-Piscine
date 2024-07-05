/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/24 13:21:33 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	size;

	i = -1;
	size = 0;
	while (src[++i] != '\0')
		size++;
	i = -1;
	while (++i < n)
	{
		if (i <= size)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}

/* int	main(void)
{
	char	str_1[] = "World1";
	char	str_2[] = "Hello";

	ft_strncpy(str_1, str_2, 7);
	return (0);
} */
