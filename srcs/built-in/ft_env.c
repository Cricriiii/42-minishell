/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:18:00 by ihadj             #+#    #+#             */
/*   Updated: 2025/10/14 17:47:25 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_env(t_shell_p shell, char **args)
{
	int	i;

	if (args && args[1])
	{
		prt_err(shell, "env", ARG_EXCESS_ERRMSG);
		return (ERRVAL1);
	}
	i = -1;
	while (shell->environ[++i])
		ft_printf("%s\n", shell->environ[i]);
	return (EXIT_SUCCESS);
}
