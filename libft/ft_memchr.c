/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:45:34 by deajiev           #+#    #+#             */
/*   Updated: 2023/11/15 16:46:01 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n != '\0')
		while (n--)
			if (*(unsigned char *)s++ == (unsigned char)c)
				return ((void *)(unsigned char *)s - 1);
	return (NULL);
}
