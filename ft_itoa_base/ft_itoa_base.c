
#include <stdlib.h>
#include <stdio.h>

int     count_char(int value, int base)
{
    int mount_char;

    mount_char = 0;
    while(value != 0)
    {
        mount_char++;
        value /= base; // 25 / 10 = 2; 2 / 10 = 0;
    }
    return (mount_char);
}

// for Value = -25; base = 10;

char	*ft_itoa_base(int value, int base)
{
    long int tmp_val; //resave value
    char *base_num;
    char *res;
    int mount_char;
    int i;

    mount_char = count_char(value, base); // mount_char = 3;
    printf("mount_char{begin} = %d\n", mount_char);

//    printf("mount_char = %d\n", mount_char);
//    printf("count_words = %d\n", count_words(value, base));

    tmp_val = (long int)value;
    i = 0;
    base_num = "0123456789ABCDEF";
    if (base == 10 && tmp_val < 0)
    {
        tmp_val = -tmp_val;
        i = 1;
        mount_char++;
        res = (char *)malloc(sizeof(char) * (mount_char + 1));
        res[0] = '-';
        res[mount_char] = '\0'; // res[3] = '\0';
        mount_char--;
    }
    else
    {
        i = 0;
        res = (char *)malloc(sizeof(char) * (mount_char + 1));
        res[mount_char] = '\0'; //mpunt_char = 2;
        mount_char--; // mpunt_char = 1;
    }
//    printf("i = %d\n", i);
    printf("mount_char{after if} = %d\n", mount_char); //= 2
    while (mount_char >= i) //2, 1,
    {
        res[mount_char] = base_num[tmp_val % base]; //25 % 10 = 5;
        mount_char--;
        tmp_val /= base;
    }
    printf("res = %s\n", res);
    return (res);
}

//int main()
//{
//    char *str;
//    int t = 1510651980;
////    str = (char *)malloc(sizeof(char) * 6);
//    str = "-01432";
////    str[4] = "\0";
////    printf("%s\n", ft_itoa_base(-25, 10));
//    ft_itoa_base(-25, 10);
////    printf("count words = %d\n", count_words(25, 10));
//    return 0;
//}
