/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 18:15:41 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/09 18:15:06 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t c)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	if (n[i] == '\0')
		return ((char *)h);
	len = ft_strlen(n);
	while (h[i] != '\0' && c >= len)
	{
		j = 0;
		if (h[i] == n[j] && (ft_strncmp(h + i, n, len) == 0))
			return ((char *)h + i);
		i++;
		c--;
	}
	return (NULL);
}
