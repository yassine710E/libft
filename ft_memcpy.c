/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:26:11 by ychabane          #+#    #+#             */
/*   Updated: 2025/10/31 17:21:15 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_tmp;
	const char	*src_tmp = src;

	i = 0;
	dest_tmp = dest;
	while (i < n)
	{
		*(dest_tmp + i) = *(src_tmp + i);
		i++;
	}
	return (dest);
}
