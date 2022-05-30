/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:05:37 by bbellatr          #+#    #+#             */
/*   Updated: 2022/05/30 16:05:37 by bbellatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	last_i;

	if ((char)c == '\0')
		return ((char *)s + (ft_strlen(s)));
	i = 0;
	last_i = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last_i = i;
		i++;
	}
	if (last_i == (size_t) - 1)
		return (NULL);
	return ((char *)s + last_i);
}
