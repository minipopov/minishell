/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:55:59 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/22 09:53:01 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *find)
{
	int index;

	if (!*find)
		return ((char*)str);
	while (*str)
	{
		if (*str == *find)
		{
			index = 0;
			while (str[index] && find[index] && str[index] == find[index])
				index++;
			if (!find[index])
				return ((char*)str);
		}
		str++;
	}
	return (0);
}
