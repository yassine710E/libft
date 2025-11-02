/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 05:34:41 by ychabane          #+#    #+#             */
/*   Updated: 2025/10/31 17:21:08 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s_tmp;

	s_tmp = s;
	i = 0;
	while (i < n)
	{
		if (*(s_tmp + i) == (char)c)
		{
			return ((void *)(s_tmp + i));
		}
		i++;
	}
	return (0);
}
