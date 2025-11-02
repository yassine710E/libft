/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:00:53 by ychabane          #+#    #+#             */
/*   Updated: 2025/10/31 17:21:31 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(const char *s, int start, int end, char c)
{
	int	counter;

	counter = 0;
	while (s[start] && start <= end)
	{
		if (ft_isprint(s[start]) && (s[start + 1] == c || s[start + 1] == '\0'))
			counter++;
		start++;
	}
	return (counter);
}

static int	ft_check_and_free(char **ptr, int index_from)
{
	if (!ptr[index_from])
	{
		index_from--;
		while (index_from >= 0)
		{
			free(ptr[index_from]);
			index_from--;
		}
		free(ptr);
		return (0);
	}
	return (1);
}

static char	**ft_split_2(char **ptr_word, const char *s, char c)
{
	int		index;
	int		i_ptr_words;
	int		start;
	char	**tmp;

	index = -1;
	i_ptr_words = -1;
	start = -1;
	tmp = ptr_word;
	while (++start <= (int)ft_strlen(s))
	{
		if (index == -1 && s[start] != c)
			index = start;
		else if (index >= 0 && (s[start] == c || start == (int)ft_strlen(s)))
		{
			tmp[++i_ptr_words] = ft_substr(s, index, start - index);
			if (!ft_check_and_free(tmp, i_ptr_words))
				return (NULL);
			index = -1;
		}
	}
	tmp[++i_ptr_words] = 0;
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_words;

	if (!s)
		return (NULL);
	ptr_words = malloc(sizeof(char *) * (ft_count_words(s, 0, ft_strlen(s) - 1,
					c) + 1));
	if (!ptr_words)
		return (NULL);
	return (ft_split_2(ptr_words, s, c));
}
