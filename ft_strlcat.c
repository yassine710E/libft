/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 04:57:28 by ychabane          #+#    #+#             */
/*   Updated: 2025/10/31 20:04:47 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_d;
	size_t	l_s;

	i = 0;
	l_d = ft_strlen(dst);
	l_s = ft_strlen(src);
	if (l_d < size - 1 && size > 0)
	{
		while (src[i] && i + l_d < size - 1)
		{
			dst[i + l_d] = src[i];
			i++;
		}
		dst[i + l_d] = '\0';
	}
	if (l_d >= size)
	{
		l_d = size;
	}
	return (l_d + l_s);
}
