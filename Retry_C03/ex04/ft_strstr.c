/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:17:47 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/30 14:20:49 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (*str == '\0' && *str == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		if ((to_find[x] == str[i + x]) && (to_find[x] != '\0'))
			x++;
		else if (to_find[0] == '\0')
			return (str);
		else if (to_find[x] == '\0')
			return (&str[i]);
		else
		{
			i++;
			x = 0;
		}
	}
	return (NULL);
}

/* int main()
{
	char str1[] = "";
	char str2[] = "";

	char *arr = ft_strstr(str1, str2);
	write(1, arr, 5);
	return (0);
} */
