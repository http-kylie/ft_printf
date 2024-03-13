/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kytan <kytan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:33:27 by kytan             #+#    #+#             */
/*   Updated: 2024/03/13 18:50:10 by kytan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putnbr(long n)
{
    int    count;

    count = 0;
    if (n < 0)
    {
        ft_putchar('-');
        count++;
        n = -n;
    }
    if (n > 9)
        count += ft_putnbr(n / 10);
    count += ft_putchar(n % 10 + '0');
    return (count);
}