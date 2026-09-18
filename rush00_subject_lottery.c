/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_subject_lottery.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbartosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:23:57 by kbartosz          #+#    #+#             */
/*   Updated: 2026/05/09 11:01:25 by kbartosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*name;
	char	letter;
	char	nl;
	int		no;

	name = "";
	if (argc == 2)
	{
		name = argv[1];
		letter = *name;
		nl = letter - 'a' + 1;
		no = (int) nl;
		printf("leter: %c # in alphabet: %d subject: %d\n", letter, no, no % 5);
		return (argv[1][0] % 5);
	}
	return (0);
}
