/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:49:52 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 06:23:10 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memalloc(size_t n)
{
	void *new;

	new = (void*)malloc(n);
	if (new)
		ft_bzero(new, n);
	return (new);
}