/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 05:45:51 by ychabane          #+#    #+#             */
/*   Updated: 2025/10/31 17:21:12 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_tmp = (const unsigned char *)s1;
	const unsigned char	*s2_tmp = (const unsigned char *)s2;
	size_t				i;

	if (!s1 || !s2)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		if (s1_tmp[i] != s2_tmp[i])
		{
			return (s1_tmp[i] - s2_tmp[i]);
		}
		i++;
	}
	return (0);
}
