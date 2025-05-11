/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedfousi <pedfousi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:58:55 by pedfousi          #+#    #+#             */
/*   Updated: 2025/05/10 16:33:31 by pedfousi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(char format, va_list va, int counter)
{
	if (format == 'c')
		return (ft_putchar_pf(va_arg(va, int), counter));
	else if (format == 's')
		return (ft_putstr_pf(va_arg(va, char *), counter));
	else if (format == 'p')
		return (ft_putptr_pf(va_arg(va, char *), counter));
	else if (format == 'i' || format == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (format == 'u')
		ft_putuint_pf(va_arg(va, unsigned int), counter);
	else if (format == 'x' || format == 'X')
	{
		if (format == 'x')
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
		else
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_UPP_BASE);
	}
	else if (format == '%')
		ft_putchar_pf(format, counter);
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	counter;
	int		i;

	if (!str)
		return (0);
	counter = 0;
	i = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			counter += converter(str[i + 1], va, &counter);
			i++;
		}
		else
			counter += ft_putchar(str[i], &counter);
		i++;
	}
	va_end(va);
	return (counter);
}
