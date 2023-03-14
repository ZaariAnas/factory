/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:11:00 by azari             #+#    #+#             */
/*   Updated: 2023/02/21 16:44:55 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 3)
	{
		int x = atoi(av[1]);
		int y = atoi(av[2]);
		i = (x >= y ? y : x);

		while (i )
		{
			if (!(x % i) && !(y % i))
			{
				printf("%d", i);
				break;
			}
			i--;
		}
	}
	printf("\n");	
}