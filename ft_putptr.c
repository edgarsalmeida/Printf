/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgda-si <edgda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:29:38 by edgda-si          #+#    #+#             */
/*   Updated: 2026/06/16 18:19:09 by edgda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_puthex_ptr(unsigned long num)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		count += ft_puthex_ptr(num / 16);
	count += ft_putchar(base[num % 16]);
	return (count + 1);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	addr;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	addr = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += ft_puthex_ptr(addr);
	return (count);
}
