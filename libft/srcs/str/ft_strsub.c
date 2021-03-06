/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:56:20 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/22 09:53:02 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include "ft_str.h"

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char *new;

	if (!s)
		return (0);
	if (len == 0)
		return (ft_strdup(""));
	if (!(new = (char*)ft_memalloc(len + 1)))
		return (0);
	new = ft_strncpy(new, s + start, len);
	new[len] = '\0';
	return (new);
}
