/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:01:53 by deajiev           #+#    #+#             */
/*   Updated: 2024/02/13 15:31:12 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printint(int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_itoa(n);
	len = ft_printstr(tab);
	free(tab);
	return (len);
}

int	ft_printunsigned(unsigned int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_decimal_itoa(n);
	len = ft_printstr(tab);
	free(tab);
	return (len);
}
