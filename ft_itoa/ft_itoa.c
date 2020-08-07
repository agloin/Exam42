//#include <stdlib.h>
//#include <stdio.h>
//
//int     mount_of_int(int nbr) // (122 / 10) = 12 (1); (12 / 10) = 1 (2); (1 / 10) = 0 (3);
//{
//    int         bytes;
//
//    bytes = 0;
//    if (nbr == 0)
//        return (1);
//    while (nbr != 0)
//    {
//        nbr = nbr / 10;
//        bytes++;
//    }
//    return (bytes);
//}
//
//char	*ft_itoa(int nbr)
//{
//    char        *str;
//    int         i;
//    long int    new_nbr;
//
//    new_nbr = (long int)nbr;
//    i = mount_of_int(nbr);
//    if (new_nbr < 0)
//    {
//        str = (char *)malloc(sizeof(char) * (i + 2));
//        str[i + 1] = '\0';
//        str[0] = '-';
//        i++;
//        new_nbr = -new_nbr;
//    }
//    else
//    {
//        str = (char *)malloc(sizeof(char) * (i + 1));
//        str[i] = '\0';
//    }
//    if (new_nbr == 0)
//        return ("0");
//    while (new_nbr != 0)
//    {
//        i--;
//        str[i] = (new_nbr % 10) + '0';
//        new_nbr /= 10;
//    }
//    return (str);
//}
//
//int	main(void)
//{
//    int i = 0;
//    int tab[7] = {-2147483648, -42, 0, 42, 2147483647, 1, -1};
//
//    while (i < 7)
//        printf("%s\n", ft_itoa(tab[i++]));
//
//    return 0;
//}
int i = 0;
int j = 0;

tmp = (char **)malloc(sizeof(char *) * (count_words(str)));
while (i < count_words )
{
    tmp[i] = (char *)malloc(sizeof(char) * strlen())
    i++;
}