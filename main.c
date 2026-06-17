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
	int	x;

	void *ptr = (void *)0x1234;

	x = ft_printf("String: %s | Char: %c | Hex: %x | HEX: %X | Ptr: %p | Unsigned: %u | Decimal: %d | Integer: %i\n", "Hello World", 'A', 255, 255, ptr, 4294967295U, -42, 42);
	printf("%d\n", x);
	x = printf("String: %s | Char: %c | Hex: %x | HEX: %X | Ptr: %p | Unsigned: %u | Decimal: %d | Integer: %i\n", "Hello World", 'A', 255, 255, ptr, 4294967295U, -42, 42);
	printf("%d\n", x);

}
