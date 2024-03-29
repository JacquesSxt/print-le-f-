/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:32:40 by deajiev           #+#    #+#             */
/*   Updated: 2023/11/15 17:07:58 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlenn(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}	

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	len;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlenn(s);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
