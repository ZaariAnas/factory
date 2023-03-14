/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:50:26 by azari             #+#    #+#             */
/*   Updated: 2023/03/14 08:06:11 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "factory.h"

int	ft_strdigit(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = ft_strdigit(av[1]);
		if (i)
			printf("string --> is digit .\n");
		else
			printf("string --> isn't digit .\n");
	}
}