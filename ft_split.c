/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:08:09 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/09 17:08:01 by albelaiz         ###   ########.fr       */
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

static void	ft_free(char **src, int j)
{
	while (j >= 0){
		free(src[j]);
    }
	free(src);
}

static char	**len_word(char **src, char const *str, char c)
{
	int	i;
	int	start;

	i = 0;
		while (str[i] && str[i] == c)
			i++;
			*start = i;
			while (str[i] != '\0' && str[i] != c)
				i++;
	return ( i - *start);
}
static char *copy_word(char *str , int len)
{
    int i = 0;
    char *dts;
    dst = malloc(len + 1);
    if (!dst)
        return(NULL);
    while (i < len){
        dst[i] = str[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**str;

	if (!s)
		return (NULL);
	len = contword(s, c);
	str = (char **)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
    str[len] = NULL;
    len = 0;    
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s && *s != c)
        {
            len = len_word(s, c);
            str[i] = copy_word(s, len);
            if (!str[i])
            {
                ft_free(str, i);
                return (NULL);
            }
            i++;
            s += len;
        }
    }
	return (len_word(str, s, c));
}

int	main(void)
{
    int i = 0;
	char **result = ft_split("Hello world this is a test", ' ');
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}