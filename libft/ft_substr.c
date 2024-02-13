/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:21:54 by deajiev           #+#    #+#             */
/*   Updated: 2023/11/15 17:06:21 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlens(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}	

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (!s)
		return (NULL);
	if (start >= ft_strlens(s))
	{
		start = 0;
		len = 0;
	}
	else if (len > ft_strlens(s) - start)
	{
		len = ft_strlens(s) - start;
	}
	newstr = (char *) malloc(sizeof(char) * (len + 1));
	if (!newstr)
	{
		return (NULL);
	}
	ft_strncpy(newstr, (char *)s + start, len);
	newstr[len] = '\0';
	return (newstr);
}

// int main() {
//     const char *s = "LQIi";
//     unsigned int start = 9; // Index de départ
//     size_t len = 5;        // Taille maximale

//     char *sub = ft_substr(s, start, len);

//     if (sub != NULL) {
//         printf("Sous-chaîne : %s\n", sub);
//         free(sub); // N'oubliez pas libérer la mémoire allouée dynamiquement
//     } else {
//         printf("Erreur lors de la création de la sous-chaîne.\n");
//     }

//     return 0;
// }
