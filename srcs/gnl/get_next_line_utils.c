/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:56:24 by bbellatr          #+#    #+#             */
/*   Updated: 2022/05/30 15:56:24 by bbellatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strtrunc(char *str, char c)
{
	char	*res;
	ssize_t	i;
	ssize_t	j;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	res = ft_calloc(sizeof(*res), ft_strlen(str) - i + 1);
	if (!res)
		return (NULL);
	while (str[++i])
		res[j++] = str[i];
	free(str);
	return (res);
}
