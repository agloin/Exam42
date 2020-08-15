
#include <stdio.h>
#include "list.h"
#include <stdlib.h>

int     ascending(int a, int b)
{
    return (a <= b);
}

void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
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
    t_list *e;

    a = (t_list *)malloc(sizeof(t_list));
    b = (t_list *)malloc(sizeof(t_list));
    c = (t_list *)malloc(sizeof(t_list));
    d = (t_list *)malloc(sizeof(t_list));
    e = (t_list *)malloc(sizeof(t_list));

    a->data = 23;
    b->data = 15;
    c->data = 10;
    d->data = 1;
    e->data = 200;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;


    sort_list(a, ascending);
    while (a)
    {
        printf("\ndig = %d\n", a->data);
        a = a->next;
    }
//    printf("a = %d", a->data);
//    ft_swap(&a->data, &a->next->data);
//    printf("%d, %d", a->data, a->next->data);
    return (0);
}