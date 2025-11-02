/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:07:26 by ychabane          #+#    #+#             */
/*   Updated: 2025/10/31 17:21:20 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*var;
	size_t	i;

	var = s;
	i = 0;
	while (i < n)
	{
		*(var + i) = (char)c;
		i++;
	}
	return (s);
}
