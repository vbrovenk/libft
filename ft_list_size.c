#include "libft.h"

int ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
	if (!begin_list)
		return (0);
	while (begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}
