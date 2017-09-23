/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 08:58:31 by dwilliam          #+#    #+#             */
/*   Updated: 2017/08/02 14:30:07 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	int		i;
	int		dest_len;
	int		j;
	int		size_temp;

	dest_len = 0;
	i = 0;
	j = 0;
	size_temp = n;
	while (src[j])
		j++;
	while (dest[i] && i < size_temp)
		i++;
	dest_len = i;
	while (src[i - dest_len] && i < size_temp - 1)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	if (dest_len < size_temp)
		dest[i] = '\0';
	return (dest_len + j);
}
