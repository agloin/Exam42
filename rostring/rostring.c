#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        int i = 1;
        int j = 0;
        int k;

        while (i < argc)
        {
            while (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
                j++;

            k = j; // this is the first char of the first word

            while (argv[i][j] && argv[i][j] != ' ' && argv[i][j] != '\t')
                j++;
            while (argv[i][j])
            {
                while (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
                    j++;
                while (argv[i][j] && argv[i][j] != ' ' && argv[i][j] != '\t')
                {
                    write(1, &argv[i][j], 1);
                    j++;
                }
                write(1, " ", 1);
                while (argv[i][k] && argv[i][k] != ' ' && argv[i][k] != '\t')
                {
                    write(1, & argv[i][k], 1);
                    k++;
                }

            }
            i++;
        }
        write(1, "\n", 1);
    }
    return 0;
}