/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:13:11 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/03 18:17:46 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *a;
	char *z;

	a = (char*)s;
	z = 0;
	while (*a)
	{
		if (*a == (char)c)
			z = a;
		a++;
	}
	if (*a == (char)c)
		z = a;
	return (z);
}
