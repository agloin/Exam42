#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ascending(int *a, int *b)
{
    return (*a <= *b);
}

void ft_list_remove_if(t_list **begin_list, int *data_ref, int (*cmp)())
{
    t_list *curr;
    t_list *tmp;

    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        curr = *begin_list;
        *begin_list = (*begin_list)->next;
        free(curr);
    }
    curr = *begin_list;
    while (curr && curr->next)
    {
        if (cmp(curr->next->data, data_ref) == 0)
        {
            tmp = curr->next;
            curr->next = tmp->next;
            free(tmp);
        }
        curr = curr->next;
    }
}

int main()
{
    t_list *a;
    t_list *b;
    t_list *c;
    t_list *d;
    int k = 10;


    a = (t_list *)malloc(sizeof(t_list));
    b = (t_list *)malloc(sizeof(t_list));
    c = (t_list *)malloc(sizeof(t_list));
    d = (t_list *)malloc(sizeof(t_list));

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    *(a->data) = 10;
    *(a->data) = 11;
    *(a->data) = 12;
    *(a->data) = 10;

    printf("a->data = %d\n", *(a->data));
    ft_list_remove_if(&a, &k, ascending);
    printf("a->data = %d\n", *(a->data));

    return 0;
}