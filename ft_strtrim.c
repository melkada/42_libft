/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-kada <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/03 20:52:43 by mel-kada     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 14:00:33 by mel-kada    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(&s1[start]);
	if (end)
		while (s1[end + start - 1] && ft_strchr(set, s1[end + start - 1]))
			end--;
	return (ft_substr(s1, start, end));
}
