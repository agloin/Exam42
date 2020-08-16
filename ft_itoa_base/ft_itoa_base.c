#include <stdlib.h>
#include <stdio.h>

//int ft_atoi(char *str)
//{
//    char *tmp;
//    int i;
//    int negative;
//    int res;
//    int temp;
//
//    i = 0;
//    while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' ||
//            str[i] == '\n' || str[i] == ' ')
//        i++;
//    negative = 1;
//    if (str[i] == '-')
//    {
//        negative = -1;
//        i++;
//    }
//    res = 0;
//    while (str[i] >= '0' && str[i] <= '9') // tmp = 313
//    {
//        res = res * 10 + str[i] - '0';
//        i++;
//    }
//    return res * negative;
//}

//char    *ft_itoa(int value)
//{
//
//}

int     cout_words(int value)
{
    int mount_char;

    mount_char = 0;
    while(value != 0)
    {
        mount_char++;
        value /= 10;
    }
    return (mount_char);
}

char	*ft_itoa_base(int value, int base)
{
    long int tmp_val; //resave value
    char *base_num;
    char *res;
    int minus;

    tmp_val = (long int)value;
    minus = 1;
    base_num = "0123456789ABCDEF";
    if (base = 10 && tmp_val < 0)
    {
        minus = -1;
        tmp_val = -tmp_val;
    }
    else
        tmp_val = -tmp_val;
    while ()

}

int main()
{
    char *str;
    int t = 1510651980;
//    str = (char *)malloc(sizeof(char) * 6);
    str = "-01432";
//    str[4] = "\0";
    printf("%d\n", cout_words(t));
    return 0;
}