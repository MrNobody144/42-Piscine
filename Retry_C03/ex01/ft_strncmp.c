/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:17:47 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/23 15:46:33 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	if (n == 0)
		return (0);
	while (s1[++i] != '\0' && i < (n - 1))
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

/* int main()
{
	char str1[] = "Hello!";
	char str2[] = "Hello}";

	int n = ft_strncmp(str1, str2, 5) + 48;
	write(1, &n, 1);
	return (0);
} */
