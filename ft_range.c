
#include <stdlib.h>
#include <stdio.h>

int amout_of_int(int lhs, int rhs)
{
    int mount;

    mount = 0;
    if (lhs == rhs)
        return (1);
    else if (lhs < 0 && rhs < 0) //-6; -3
        mount = -lhs + rhs + 1;
    else if (lhs > 0 && rhs > 0) // 3; 5;
        mount = rhs - lhs + 1;
    else if (lhs < 0, rhs > 0) //-3; 3
        mount = rhs - lhs + 1;
    else if (lhs > 0 && rhs < 0) // 2; -3
        mount = -rhs + lhs + 1;
    return (mount);
}

int     *ft_range(int start, int end)
{
    int *res;
    int i;

    i = 0;
    res = (int *)malloc(sizeof(int) * amout_of_int(start, end));
    while (i <= amout_of_int(start, end))
    {
        res[i] = start + i;
        i++;
    }
    return (res);
}

//int main()
//{
//    int a;
//    int b;
//
//    a = -5;
//    b = 10;
//    ft_range(a, b);
//    printf("%d\n", ft_range(a, b)[11]);
//    return (0);
//}
