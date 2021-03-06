/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkForDups.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:10:21 by aabounak          #+#    #+#             */
/*   Updated: 2021/06/12 13:10:40 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	checkForDups(t_list *head)
{
	int		count;
	t_list	*temp;
	t_list	*temp1;

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		temp1 = temp;
		count = 0;
		while (temp1 != NULL && temp1->next)
		{
			if (*(int *)temp->content == *(int *)temp1->next->content)
				count++;
			temp1 = temp1->next;
		}
		if (count > 0)
			return (DUPLICATE_FOUND);
		temp = temp->next;
	}
	return (FUNCTION_SUCCESS);
}
