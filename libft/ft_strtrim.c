/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:28 by deajiev           #+#    #+#             */
/*   Updated: 2023/11/15 17:07:00 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

// int main()
// {
//     const char *input_string = "   This is a test string with space ";
//     const char *trim_characters = "";

//     char *trimmed_string = ft_strtrim(input_string, trim_characters);

//     if (trimmed_string)
//     {
//         printf("Chaîne d'entrée : \"%s\"\n", input_string);
//         printf("Chaîne après suppression : \"%s\"\n", trimmed_string);

//         // Assurez-vous de libérer la mémoire allouée dynamiquement
//         free(trimmed_string);
//     }
//     else
//     {
//         printf("L'allocation de mémoire a échoué.\n");
//     }

//     return 0;
// }
