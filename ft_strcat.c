/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:30:01 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/02 14:31:44 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		inc;
	size_t	endc;

	inc = 0;
	endc = ft_strlen(dest);
	while (src[inc] != '\0')
	{
		dest[endc] = src[inc];
		inc++;
		endc++;
	}
	dest[endc] = '\0';
	return (dest);
}
