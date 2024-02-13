/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:44:16 by deajiev           #+#    #+#             */
/*   Updated: 2024/02/13 13:20:03 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printhex(unsigned long n, char hex);
int		ft_printstr(char *str);
int		ft_printint(int n);
char	*ft_itoa_base(unsigned long n, char hex[16]);
int		ft_printptr(void *ptr);
int		ft_printpercent(void);
int		ft_printunsigned(unsigned int n);
char	*ft_decimal_itoa(unsigned int n);
#endif