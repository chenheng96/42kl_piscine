/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:19:39 by cchong            #+#    #+#             */
/*   Updated: 2022/02/28 09:48:27 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb >= 2147483647)
		return (2147483647);
	while (ft_is_prime(nb) != 1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
		{
			if (nb >= 2147483647)
			{	
				return (2147483647);
			}
			nb++;
		}
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 2;
	j = 1;
	if (nb >= 2147483647)
		return (2147483647);
	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			j = 0;
			break ;
		}
		++i;
	}
	if (j == 0)
		return (0);
	else
		return (1);
}
