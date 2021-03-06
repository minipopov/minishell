/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_chr_token.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 09:53:56 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/22 09:53:58 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lexer.h"

void	ft_del_chr_token(t_chr_token **tkn)
{
	if (tkn && *tkn)
	{
		free(*tkn);
		*tkn = 0;
	}
}
