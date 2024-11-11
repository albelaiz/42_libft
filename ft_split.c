/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:08:09 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/10 12:59:00 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contword(char const *str, char sip)
{
	int	i;
	int	key;
	int	cont;

	i = 0;
	key = 1;
	cont = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == sip)
		{
			i++;
			key = 1;
		}
		if (str[i] && key == 1)
		{
			cont++;
			key = 0;
			while (str[i] && str[i] != sip)
				i++;
		}
	}
	return (cont);
}

static void	*ft_free(char **src, int j)
{
	while (--j >= 0)
		free(src[j]);
	free(src);
	return (NULL);
}

static char	**len_word(char **src, const char *str, char c)
{
	int		i;
	int		j;
	size_t	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		start = 0;
		while (str[i] && str[i] == c)
			i++;
		while (str[i + start] && str[i + start] != c)
			start++;
		if (start > 0)
		{
			src[j] = malloc(sizeof(char) * (start + 1));
			if (!src[j])
				return (ft_free(src, j));
			ft_strlcpy(src[j++], &str[i], start + 1);
		}
		i += start;
	}
	src[j] = NULL;
	return (src);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = contword(s, c);
	str = (char **)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (len_word(str, s, c));
}

// int	main(void)
// {
// 	int i = 0;
// 	char **result = ft_split("Hello world this is a test", ' ');
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }