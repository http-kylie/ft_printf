/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kytan <kytan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:50:25 by kytan             #+#    #+#             */
/*   Updated: 2024/03/13 18:52:19 by kytan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char specifier)
{
    int		count;
    char	*base;

	count = 0;
	if (specifier == 'x')
        base = "0123456789abcdef";
	else
        base = "0123456789ABCDEF";
    if (n > 15)
        count += ft_puthex(n / 16, specifier);
    count += ft_putchar(*(base + (n % 16)));
    return (count);
}
