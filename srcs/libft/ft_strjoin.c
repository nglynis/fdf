/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:57:40 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:57:43 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1len;
	size_t	s2len;

	if (!s1 && !s2)
		return (NULL);
	s1len = s1 ? ft_strlen(s1) : 0;
	s2len = s2 ? ft_strlen(s2) : 0;
	if ((str = ft_strnew(s1len + s2len + 1)))
	{
		*str = '\0';
		if (s1)
			ft_strlcat(str, s1, s1len + 1);
		if (s2)
			ft_strlcat(str, s2, s1len + s2len + 1);
		return (str);
	}
	else
		return (NULL);
}
