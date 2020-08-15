#include <stdlib.h>
#include <stdio.h>

int count_of_char(int nbr)
{
    int count_char;
//    int tmp;

    count_char = 1;
    while (nbr / 10 != 0)
    {
        count_char++;
        nbr /= 10;
    }
    return count_char;
}

char	*ft_itoa(int nbr)
{
    int count_char;
    char *res;

    count_char = count_of_char(nbr) + 1; // 4
    res = (char*)malloc(sizeof(char) * count_char);
    count_char--; // index = 3
    res[count_char] = '\0';
    count_char--; // index = 2
    while (count_char >= 0)
    {
        res[count_char] = nbr % 10 + '0';
        nbr /= 10;
        count_char--;
    }
    return res;
}

int main()
{
    int k = 844661576;

    printf("%s", ft_itoa(k));
    return 0;
}