/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achillebosc <achillebosc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:50:04 by achillebosc       #+#    #+#             */
/*   Updated: 2024/10/25 02:57:42 by achillebosc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
  t_list  *new;
  
  new = (t_list *)malloc(sizeof(t_list));
  if (!new)
    return (NULL);
  new->content = content;
  new->next = NULL;
  return (new);
}