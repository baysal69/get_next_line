/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:52:27 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/20 20:25:17 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
//default size that applies to entire project
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
//UTILITY STRUCTUR
typedef struct s_utils //define a structure named s_utils 
{//members:
	ssize_t	readed;//how much i've processed so far
	char	*next_line;//store the line
	char	*buffer;//data from file temporarily store after read() call
	char	*left_over;
	int		trunc;
	//Example: After calling read(fd, buffer, BUFFER_SIZE), this stores data read.
}					t_utils;
//all variables of type t_utils are istances(ISTANZA)
char	*get_next_line(int fd);
char	ft_strjoin(char *s1, char *s2);
char	ft_strlcpy(char *dst, char *src, size_t size);
int		ft_strlen(char *str);
char	ft_strdup(char *s);

#endif
/*
static allocation: memor alloc at compile time and has fixed size.
					allocates in STACK(local variab) or in GLOBAL
					or STATIC(for global and static variab).
dynamic allocation: memor alloc at runtime usin function as malloc,
					calloc and realloc. memo alloc in HEAP.
					*/