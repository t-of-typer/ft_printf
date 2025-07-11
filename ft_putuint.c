/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedfousi <pedfousi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:54:47 by pedfousi          #+#    #+#             */
/*   Updated: 2025/07/07 20:37:50 by pedfousi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_aux_pf(num, "0123456789");
	ft_putstr_pf(str, counter);
	free(str);
}
