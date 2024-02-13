/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deajiev <deajiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:25:31 by deajiev           #+#    #+#             */
/*   Updated: 2023/11/15 16:58:27 by deajiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static char	**free_tab(char **tab, int k)
{
	while (k-- > 0)
		free(tab[k]);
	free(tab);
	return (NULL);
}

static char	**fill_tab(char const *s, char c, char **tab, int word_count)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i] && k < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		tab[k] = ft_substr(s, j, i - j);
		if (!tab[k])
			return (free_tab(tab, k));
		k++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	tab = ft_calloc((word_count + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	return (fill_tab(s, c, tab, word_count));
}

// int main()
// {
//     char *input_string = ",la,lo,li,la";
//     char delimiter = ',';

//     char **result = ft_split(input_string, delimiter);

//     if (result)
//     {
//         int i = 0;
//         while (result[i])
//         {
//             printf("Mot %d : %s\n", i + 1, result[i]);
//             i++;
//         }

//         // Assurez-vous de libérer la mémoire allouée dynamiquement
//         i = 0;
//         while (result[i])
//         {
//             free(result[i]);
//             i++;
//         }
//         free(result);
//     }
//     else
//     {
//         printf("L'allocation de mémoire a échoué\n");
//     }

//     return 0;
// }