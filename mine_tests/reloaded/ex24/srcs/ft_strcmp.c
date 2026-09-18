/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbartosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:05:28 by kbartosz          #+#    #+#             */
/*   Updated: 2026/05/21 10:09:40 by kbartosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s1[i] || s2[i])
	{
		r = s1[i] - s2[i];
		if (r)
			return (r);
		i++;
	}
	return (r);
}

/* test */
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int i;
	char s1[20] = "acccca";
	char s2[20] = "accecz";

	i = 0;
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	i = ft_strcmp(s1, s2);
	printf("%d\n", i);
	return (0);
}
*/
