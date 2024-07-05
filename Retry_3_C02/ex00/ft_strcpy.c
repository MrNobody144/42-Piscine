/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:08:41 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/22 16:31:40 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i] != '\0')
		dest[i] = src [i];
	dest[i] = '\0';
	return (dest);
}

/* int	main()
{
	char	str_1[50];

	char str_2[41] = "Hello World!0000000000000000000000000000";
	ft_strcpy(str_1, str_2);
	return (0);
} */
