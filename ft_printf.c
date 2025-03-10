/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedfousi <pedfousi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:58:55 by pedfousi          #+#    #+#             */
/*   Updated: 2025/03/10 21:56:22 by pedfousi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(char format, va_list va)
{
	if (format == 'c')
		return (ft_putchar(va_arg(va, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(va, char *)));
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
			counter += converter(str[i + 1], va);
			i++;
		}
		else
			counter += ft_putchar(str[i]);
		i++;
	}
	va_end(va);
	return (counter);
}
