/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 03:42:11 by pprejith          #+#    #+#             */
/*   Updated: 2025/06/12 03:42:20 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void get_path(char *cmd, char **envp)
{
    while(*envp)
    {
        if(ft_strncmp(*envp, "PATH=", 5)== 0)
            return (*envp+5);
        *envp++;
    }
}
