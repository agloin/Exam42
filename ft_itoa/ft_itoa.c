#include <stdlib.h>
#include <stdio.h>

int     mount_of_int(int nbr)
{
    int bytes;
    char *tmp;

    bytes = 0;
    if (nbr == 0)
        return (1);
    while (nbr != 0)
    {
        nbr = nbr / 10;
        bytes++;
    }
    return (bytes);
}

char	*ft_itoa(int nbr)
{
    char *str;
    char  *tmp;
    int  i;
    long int new_nbr;

    new_nbr = (long int)nbr;
    i = mount_of_int(nbr);
    if (new_nbr < 0)
    {
        str = (char *)malloc(sizeof(char) * (i + 2));
        str[i + 1] = '\0';
        str[0] = '-';
        i++;
        new_nbr = -new_nbr;
    }
    else
    {
        str = (char *)malloc(sizeof(char) * (i + 1));
        str[i] = '\0';
    }
    if (new_nbr == 0)
        return ("0");
    while (new_nbr != 0)
    {
        i--;
        str[i] = (new_nbr % 10) + '0';
        new_nbr /= 10;
    }
    return (str);
}

int	main(void)
{
    int i = 0;
    int tab[7] = {-2147483648, -42, 0, 42, 2147483647, 1, -1};

    while (i < 7)
        printf("%s\n", ft_itoa(tab[i++]));

    return 0;
}
