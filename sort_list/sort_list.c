#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int		ascending(int a, int b)
{
    return (a <= b);
}

void    swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *begin;
    t_list *next;

    begin = lst;
    while (lst)
    {
        next = lst->next;
        while (next)
        {
            if (!(cmp(lst->data, next->data)))
                swap(&lst->data, &next->data);
            next = next->next;
        }
        lst = lst->next;
    }
    return (begin);
}

int main()
{
    t_list *a;
    t_list *b;
    t_list *c;
    t_list *d;

    a = (t_list *)malloc(sizeof(t_list));
    b = (t_list *)malloc(sizeof(t_list));
    c = (t_list *)malloc(sizeof(t_list));
    d = (t_list *)malloc(sizeof(t_list));

    a->data = 10;
    b->data = 7;
    c->data = 2;
    d->data = 15;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    t_list *res;
    res = (t_list *)malloc(sizeof(t_list));
    res = sort_list(a, ascending);
    while (res != NULL)
    {
        printf("%d ", res->data);
        res = res->next;
    }
    return 0;
}
