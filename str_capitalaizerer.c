#include <unistd.h>

int is_space(char c)
{
    if (c == '\t' || c == ' ')
        return(1);
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc > 1)
    {
        while (argv[i])
        {
            while (argv[i][j] && is_space(argv[i][j]) == 1) // печатаем пробелы в начале, если есть
            {
                ft_putchar(argv[i][j]);
                j++;
            }
            while (argv[i][j])
            {
                while (argv[i][j + 1] && argv[i][j] >= 'A' && argv[i][j] <= 'Z'
                       && is_space(argv[i][j + 1]) == 0)
                {
                    ft_putchar(argv[i][j] + 32);
                    j++;
                }
                // если у нас буква последняя маленькая, то мы пишем большую
                if (argv[i][j] && (argv[i][j+ 1] == '\0'
                                   || is_space(argv[i][j + 1]) == 1)
                    && argv[i][j] >= 'a' && argv[i][j] <= 'z')
                {
                    ft_putchar(argv[i][j] - 32);
                    j++;
                }
                    //иначе мы пишем то что есть
                else
                {
                    write(1, &argv[i][j], 1);
                    j++;
                }
            }
            ft_putchar('\n');
            j = 0;
            i++;
        }

    }
    else
        write(1, "\n", 1);
    return 0;
}
