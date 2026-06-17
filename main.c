/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgda-si <edgda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 18:32:14 by edgda-si          #+#    #+#             */
/*   Updated: 2026/06/16 18:32:43 by edgda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("A Casa %c\n", 'a');
	ft_printf("A Casa %s\n", "Vermelha");
	ft_printf("A Casa %%\n");
	ft_printf("%p\n", 42);
	ft_printf("%x\n", 42);
	ft_printf("%X\n", 42);
	ft_printf("%d\n", 10);
	ft_printf("%i\n", -10);
	ft_printf("%u\n", -10);
	ft_printf("%u\n", 12);
	ft_printf("%q\n");
	printf("%q\n");
}
