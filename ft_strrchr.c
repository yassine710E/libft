/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 06:11:06 by ychabane          #+#    #+#             */
/*   Updated: 2025/10/31 17:22:03 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l_i;

	l_i = ft_strlen(s) - 1;
	if ((char)c == '\0')
	{
		return ((char *)s + (l_i + 1));
	}
	while (l_i >= 0)
	{
		if (s[l_i] == (char)c)
			return ((char *)s + l_i);
		l_i--;
	}
	return (NULL);
}
