/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achillebosc <achillebosc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 03:01:18 by achillebosc       #+#    #+#             */
/*   Updated: 2024/10/25 03:03:56 by achillebosc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
  int counter;

  counter = 0;
  while (lst->next)
  {
    lst = lst->next;
    counter++;
  }
  return (counter);
}