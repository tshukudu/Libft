/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:27:58 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/18 12:48:48 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup;
	char	*cmpstr;

	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	cmpstr = dup;
	while (*str)
	{
		*cmpstr = *str;
		cmpstr++;
		str++;
	}
	*cmpstr = '\0';
	return (dup);
}
