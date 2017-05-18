/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 23:51:15 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/05/18 23:53:50 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		do_op(t_env *e, int op, char verbose)
{
	e->exec[op](e);
	if (verbose)
		ft_printf("%s\n", e->op[op]);
	e->nb_op++;
}
