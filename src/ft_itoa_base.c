/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:58:09 by deajiev           #+#    #+#             */
/*   Updated: 2024/02/13 15:31:02 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_itoa_base(unsigned long n, char hex[16])
{
	int		i;
	char	*tab;
	char	*result;

	tab = ft_calloc(17, sizeof(char));
	if (!tab)
		return (NULL);
	i = 16;
	while (n)
	{
		tab[--i] = hex[n % 16];
		n /= 16;
	}
	result = ft_strdup(tab + i);
	free(tab);
	return (result);
}
