/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjm <bjm@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:13:33 by bjm               #+#    #+#             */
/*   Updated: 2022/02/08 17:16:59 by bjm              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
		while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*ret;
	int		i;

	i = -1;
	if (!s1)
		return (ft_strdup(""));
	ret = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s1)
		while (s1[++i])
			ret[i] = s1[i];
	ret[i] = '\0';
	return (ret);
}

int	ft_strchr(char *s1, int c)
{
	int	i;

	i = 0;
	if (s1)
	{
		while (s1[i] != '\0')
		{
			if (s1[i] == c)
				return (1);
			i++;
		}
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	ret = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s1)
	{
		while (s1[i] != '\0')
		{
			ret[i] = s1[i];
			i++;
		}
	}
	if (s2)
		while (s2[j] != '\0')
			ret[i++] = s2[j++];
	ret[i] = '\0';
	free (s1);
	return (ret);
}
