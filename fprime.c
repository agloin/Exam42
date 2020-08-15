
#include <stdlib.h>
#include <stdio.h>

int is_prime(int a)
{
    int b;

    b = a - 1;
    while (b > 1)
    {
        if (a % b == 0)
            return (1);
        b--;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int res;
        int tmp_argv = atoi(argv[1]);
        int div;

        div = 2;
        while (div < tmp_argv || tmp_argv != 1)
        {
            if (is_prime(div) == 0 && tmp_argv % div == 0)
            {
                printf("%d", div);
                tmp_argv /= div;
                if (tmp_argv != 1)
                    printf("*");
                div = 1;
            }
            div++;
        }
    }
    printf("\n");
    return 0;
}
