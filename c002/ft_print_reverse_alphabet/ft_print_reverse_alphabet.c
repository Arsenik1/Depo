/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:46:14 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/13 15:47:31 by skaragol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	char	a;
	int		i;

	a = 'z';
	i = 25;
	while (i >= 0)
	{
		write(1, &a, 1);
		i--;
		a--;
	}
}
