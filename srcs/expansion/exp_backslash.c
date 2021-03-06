/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exp_backslash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:41:19 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/22 10:41:20 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	exp_backslash(char **str)
{
	char	*s;

	s = *str;
	while (*s)
	{
		if (*s == '\\')
			ft_strrmvchr(s);
		s++;
	}
}
