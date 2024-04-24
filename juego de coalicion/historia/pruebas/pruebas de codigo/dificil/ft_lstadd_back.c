/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:19:29 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/24 10:37:31 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stlib.h>

//typedef no lo hacen se pasa a .h
typedef	struct	s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

//esto no
t_list	*new_node(int data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

//esto si
void	ft_lstadd_back(t_list **lst, t_list *new)

{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*temp;

	*head = NULL;
	*node1 = new_node(1);
	*node2 = new_node(2);
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	*temp = head;
	while (temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	free(node1);
	free(node2);
	return (0);
}