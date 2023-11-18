#include "sort.h"

/**
 * insertion_sort_list - ....
 * @list: ....
 * Return:
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tmp2, *tmp3;

	if (*list == NULL || (*list)->next == NULL)
		return;
	tmp = (*list)->next;
	while (tmp != NULL)
	{
		tmp3 = tmp;
		tmp2 = tmp3->prev;
		while (tmp2->n > tmp3->n)
		{

			if (tmp2->prev == NULL)
			{
				*list = tmp3;
				tmp2->next = tmp3->next;
				tmp2->prev = tmp3;
				tmp3->prev = NULL;
				tmp3->next = tmp2;
				tmp2->next->prev = tmp2;
				print_list(*list);
				break;
			}
			else
			{
				tmp2->next = tmp3->next;
				tmp3->prev = tmp2->prev;
				tmp2->prev = tmp3;
				tmp3->next = tmp2;
				if (tmp2->next != NULL)
					tmp2->next->prev = tmp2;
				tmp3->prev->next = tmp3;
				tmp2 = tmp3->prev;
				print_list(*list);
			}
		}
		tmp = tmp->next;

	}
}
