/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:37:26 by pprejith          #+#    #+#             */
/*   Updated: 2025/06/12 03:42:04 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"


void child(char **argv, int *fds, char **envp)
{
    int infile_fd;
    char *path;
    
    infile_fd = open_file(argv[1],0);
    dup2(infile_fd,0);
    dup2(fds[1],1);
    close(fds[0]);
    execve(path,argv[2],envp);
}

void parent(char **argv, int *fds, char **envp)
{
    int outfile_fd;
    char *path;

    outfile_fd = open_file(argv[4],1);
    dup2(outfile_fd, 1);
    dup2(fds[0],0);
    clode(fds[1]);
    execve(path, argv[3], envp);
}