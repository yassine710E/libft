/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:55:21 by ychabane          #+#    #+#             */
/*   Updated: 2025/10/31 21:02:42 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rev(char *s)
{
	size_t	index;
	size_t	l_s;
	char	tmp;

	index = 0;
	l_s = ft_strlen(s);
	while (index < (l_s / 2))
	{
		tmp = s[index];
		s[index] = s[l_s - 1 - (index)];
		s[l_s - 1 - (index)] = tmp;
		index++;
	}
}

static char	*ft_set_0(char *ptr)
{
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

static void	ft_hhhhh(char *ptr, int *i_heap, long *nb, int *index)
{
	ptr[(*i_heap)++] = '-';
	*(nb) = -*(nb);
	*(index) = *(index) + 1;
}

static int	ft_count_degit(int n)
{
	int	result;

	result = 0;
	if (n == -2147483648)
		result = 11;
	else
	{
		if (n == 0)
		{
			result = 1;
			return (result);
		}
		else if (n < 0)
		{
			result++;
			n = -n;
		}
		while (n)
		{
			result++;
			n = n / 10;
		}
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i_heap;
	long	nb;
	int		index;

	index = 0;
	ptr = malloc(ft_count_degit(n) + 1);
	if (!ptr)
		return (NULL);
	nb = n;
	i_heap = 0;
	if (nb == 0)
		return (ft_set_0(ptr));
	else if (nb < 0)
		ft_hhhhh(ptr, &i_heap, &nb, &index);
	while (nb)
	{
		ptr[i_heap++] = (nb % 10) + '0';
		nb /= 10;
	}
	ptr[i_heap] = '\0';
	ft_rev(ptr + index);
	return (ptr);
}
