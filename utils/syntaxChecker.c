/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntaxChecker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:17:16 by aabounak          #+#    #+#             */
/*   Updated: 2021/06/12 13:17:51 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "../includes/push_swap.h"

int	syntaxChecker(int ac, char **arg)
{
	int		tmp;
	int		index;
	int		i;

	i = 0;
	while (++i < ac)
	{
		tmp = ft_atoi(arg[i]);
		if (tmp == -1953752846 || tmp == 1953752846)
			return (FUNCTION_ERROR);
		index = 0;
		if (tmp < 0 || arg[i][0] == '+')
			index = 1;
		while (arg[i][index] != '\0')
		{
			if (!ft_isdigit(arg[i][index]))
				return (FUNCTION_ERROR);
			index++;
		}
	}
	return (FUNCTION_SUCCESS);
}
