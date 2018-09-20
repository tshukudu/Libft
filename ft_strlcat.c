/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:31:42 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/18 13:10:56 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (i > n)
		return (j + n);
	if (i < n)
		ft_strncat(dest, src, n - i - 1);
	return (i + j);
}
