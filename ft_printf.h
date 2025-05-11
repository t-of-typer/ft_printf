/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedfousi <pedfousi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:02:42 by pedfousi          #+#    #+#             */
/*   Updated: 2025/05/01 17:51:17 by pedfousi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int			ft_printf(char const *str, ...);

static int	ft_putchar_pf(char c, size_t *counter);
static int	ft_putstr_pf(char *str, size_t *counter);
static int	ft_putnbr_pf(int num, size_t *counter);
static int	ft_putint_pf(unsigned int num, size_t *counter);
static int	ft_puthex_pf(unsigned int num, size_t *counter, char *base);
static int	ft_putptr_pf(void *ptr, size_t *counter);

char		*ft_aux_pf(unsigned long long n, char *base);

#endif