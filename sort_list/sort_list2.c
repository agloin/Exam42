#include <stdlib.h>
#include "list.h"
#include <stdio.h>

int ascending(int a, int b)
{
    return (a <= b);
}

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
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
                ft_swap(&lst->data, &next->data);
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

    a->next = b;
    a->data = 6;
    b->next = c;
    b->data = 500;
    c->next = d;
    c->data = 0;
    d->data = 1;
    d->next = NULL;

    sort_list(a, ascending);

    while (a)
    {
        printf("a->data = %d ", a->data);
        a = a->next;
    }
    return 0;
}