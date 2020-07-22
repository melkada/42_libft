/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-kada <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/02 17:49:27 by mel-kada     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 13:59:25 by mel-kada    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t size_dst;
	size_t size_src;

	i = 0;
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (size <= size_dst)
		return (size_src + size);
	while (dst[i])
		i++;
	while (*src && i < size - 1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = 0;
	return (size_dst + size_src);
}
