/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:12:49 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/10 15:12:14 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (s1 && s2)
	{
		if (!(str = (char*)malloc(sizeof(char) *
		(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1))))
			return (NULL);
		str = ft_strcpy(str, (char*)s1);
		str = ft_strcat(str, (char*)s2);
		return (str);
	}
	return (0);
}
