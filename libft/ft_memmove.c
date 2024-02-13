/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:27:40 by deajiev           #+#    #+#             */
/*   Updated: 2023/11/15 16:46:30 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_start;
	const unsigned char	*src_start;

	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	dest_start = (unsigned char *)dest;
	src_start = (const unsigned char *)src;
	if (dest > src)
	{
		while (n--)
			*(dest_start + n) = *(src_start + n);
	}
	else
	{
		while (n--)
			*(dest_start++) = *(src_start++);
	}
	return (dest);
}
