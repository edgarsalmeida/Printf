/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 21:23:56 by marvin            #+#    #+#             */
/*   Updated: 2026/06/16 21:23:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
    int	count;
    long int num;

    count = 0;
    num = n;
    if (num < 0)
    {
        count += ft_putchar('-');
        num = -num;
	}
		if (num > 9)
			count += ft_putnbr(num / 10);
        count += ft_putchar((num % 10) + '0');
    return (count);
}