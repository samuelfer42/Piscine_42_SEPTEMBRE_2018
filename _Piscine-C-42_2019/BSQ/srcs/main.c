/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:03:09 by safernan          #+#    #+#             */
/*   Updated: 2019/06/25 15:55:11 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	  if (ac != 2)
        ft_putstr("manque le nom du fichier");

	ft_count_map(av[1]);
	return (0);
}
