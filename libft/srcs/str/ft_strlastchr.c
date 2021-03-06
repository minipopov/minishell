/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlastchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 09:52:11 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/22 09:52:11 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlastchr(char *s)
{
	if (s)
	{
		if (*s)
		{
			while (*s)
				s++;
			return (s - 1);
		}
		return (s);
	}
	return (0);
}
