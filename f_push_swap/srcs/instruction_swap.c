/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 18:32:31 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/05/18 18:53:21 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		op_sa(t_env *e)
{
	if (e->nb_a > 1)
		SWAP(((t_pi*)(e->p_a->content))->nb, ((t_pi*)(e->p_a->next->content))->nb);
	return (1);
}

int		op_sb(t_env *e)
{
	if (e->nb_b > 1)
		SWAP(((t_pi*)(e->p_b->content))->nb, ((t_pi*)(e->p_b->next->content))->nb);
	return (1);
}

int		op_ss(t_env *e)
{
	if (op_sa(e) && op_sb(e))
		return (1);
	return (0);
}
