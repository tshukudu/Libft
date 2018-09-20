/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:01:40 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/18 12:14:08 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	if (c == '\0')
		return (char *)str + ft_strlen((char*)str);
	while (i >= 0)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
