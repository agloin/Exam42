#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 1)
        write(1, "options: abcdefghijklmnopqrstuvwxyz", 36);
    else if (argc > 1)
    {
        int i = 1;
        int mass[32] = {0};
        if (argv[i][0] == '-')
        {
            if (argv[i][1] && (argv[i][1] < 'a' || argv[i][1] > 'z'))
            {
                write(1, "Invalid Options\n", 16);
                return 0;
            }
            while (argv[i])
            {
                int j = 1;
                while (argv[i][j] && argv[i][j] >= 'a' && argv[i][j] <= 'z')
                {
                    if (argv[i][j] == 'h')
                    {
                        write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
                        return 0;
                    }
                    mass['z' - argv[i][j] + 6] = 1;
                    j++;
                }
                i++;
            }
            i = 0;
            while (i < 32)
            {
                if (i == 8 || i == 16 || i == 24)
                    write(1, " ", 1);
                int t = '0' + mass[i];
                write(1, &t, 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
