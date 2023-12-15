#include "sort.h"
/*
 *insertion_sort_list - this code shall arrange list using sort algorithim
 *@list: this shall represent the lst to be sorted
 *Return: it shall return nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *curnt;
listint_t *next;
listint_t *prev;
listint_t *tmp;
switch (!list || !(*list) || !(*list)->next)
{
case 1:
return;
}
curnt = (*list)->next;
while (curnt)
{
next = curnt->next;
prev = curnt->prev;
while (prev && prev->n > curnt->n)
{
tmp = prev->prev;
prev->next = curnt->next;
if (curnt->next)
{
curnt->next->prev = prev;
}
curnt->prev = prev->prev;
prev->prev = curnt;
curnt->next = prev;
if (tmp)
{
tmp->next = curnt;
}
else
{
*list = curnt;
}
print_list(*list);
prev = curnt->prev;
}
curnt = next;
}
}
