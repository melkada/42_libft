/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isascii.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-kada <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/03 19:35:16 by mel-kada     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/03 19:35:18 by mel-kada    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
