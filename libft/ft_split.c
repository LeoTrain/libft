/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:17:05 by leberton          #+#    #+#             */
/*   Updated: 2025/04/28 07:05:23 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_count_words compte le nombre de mots dans s.
 * Un mot est une suite de caracteres separes par le delimiteur c.
 * Utilise un flag pour savoir si on est dans un mot ou non.
 */
size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

/*
 * ft_word_len calcule la longueur du mot courant.
 * Compte les caracteres jusqu'au prochain delimiteur ou fin de string.
 */
int	ft_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

/*
 * ft_free_split libere le tableau et toutes ses strings.
 * Utilise pour cleanup en cas d'echec d'allocation pendant split.
 * Retourne NULL pour simplifier les return.
 */
void	*ft_free_split(char **result)
{
	size_t	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

/*
 * ft_split decoupe une string en tableau de strings selon un delimiteur.
 * 1. Compte le nombre de mots (ft_count_words)
 * 2. Alloue le tableau de pointeurs + 1 pour NULL
 * 3. Pour chaque mot : saute les delimiteurs, extrait le mot, avance
 * Libere tout et retourne NULL si une allocation echoue.
 */
char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	result = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c && *s)
			s++;
		result[i] = ft_substr(s, 0, ft_word_len(s, c));
		if (!result[i])
			return (ft_free_split(result));
		s += ft_word_len(s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}
