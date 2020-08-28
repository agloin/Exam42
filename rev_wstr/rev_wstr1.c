#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_slen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}

int ft_count_words(char *str)
{
    int i = 0;
    int count_words = 0;

    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        if (str[i] && str[i] != '\t' && str[i] != ' ')
            count_words++;
        while (str[i] && str[i] != '\t' && str[i] != ' ')
            i++;
    }
    return count_words;
}

int     main(int argc, char **argv)
{
    int i;
    int count_words;
    int k;

    i = 0;
    k = 0;
    count_words = 0;
    if (argc == 2)
    {
        count_words = ft_count_words(argv[1]);
//        printf("count words = %d\n", count_words);
        while (argv[1][i])
            i++;
        i--;
        while (count_words > 0)
        {
            while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
                i--;
            k = i + 1;
            i--;
            while (argv[1][k] && argv[1][k] != '\t' && argv[1][k] != ' ')
            {
                write(1, &argv[1][k], 1);
                k++;
            }
            if (count_words != 1)
                write(1, " ", 1);
            count_words--;
        }
    }
    write(1, "\n", 1);
    return 0;
}

