/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-kada <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/03 19:39:36 by mel-kada     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 19:52:58 by mel-kada    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libft.h"

static	int		get_nbr_words(char const *s, char c)
{
	int		words;
	int		separator;

	words = 0;
	separator = 0;
	while (*s)
	{
		if (*s == c)
			separator = 0;
		else if (separator == 0)
		{
			separator = 1;
			words++;
		}
		s++;
	}
	return (words);
}

static	int		get_nbr_char(char const *s, char c, int i)
{
	int		nbr;

	nbr = 0;
	while (s[i] && s[i] != c)
	{
		nbr++;
		i++;
	}
	return (nbr);
}

static	char	**ft_memfree(char **str, int max)
{
	int i;

	i = 0;
	while (i < max)
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
	return (str);
}

static	char	**ft_str(char **str, char const *s, char c, int words)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (i < words)
	{
		if (!(str[i] = (char *)malloc(sizeof(char) * get_nbr_char(s, c, j))))
			return (ft_memfree(str, i));
		k = 0;
		while (s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			str[i][k] = s[j];
			j++;
			k++;
		}
		str[i][k] = 0;
		j++;
		i++;
	}
	str[i] = 0;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**ptr;
	int		words;

	if (!s)
		return (NULL);
	words = get_nbr_words(s, c);
	if (!(ptr = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	return (ft_str(ptr, s, c, words));
}
