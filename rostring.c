

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *tmpall; //вся строка, без первого слова
    int all = 0;

    if (argc > 1)
    {
        int i = 0;
        int flag = 0;

        while (argv[1][i] && argv[1][i] == ' ') // пробелы в начале
            i++;
        while (argv[1][i] && argv[1][i] != ' ') // пропускаем первое слово
            i++;

        while (argv[1][i])
        {
            while (argv[1][i] && argv[1][i] == ' ') // пробелы в начале
                i++;
            while (argv[1][i] && argv[1][i] != ' ') // написали слово
            {
                flag = 1;
                write(1, &argv[1][i], 1);
                i++;
            }
            while (argv[1][i] && argv[1][i] == ' ')
                i++;
            if (argv[1][i] || flag == 1)
                write(1, " ", 1);
        }
        i = 0;
        while (argv[1][i] && argv[1][i] == ' ') // пробелы в начале
            i++;
        while (argv[1][i] && argv[1][i] != ' ') // написали слово
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
   write(1, "\n", 1);
    return 0;
}
