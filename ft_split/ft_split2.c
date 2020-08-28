#include <stdlib.h>
#include <stdio.h>

int ft_count_words(char *str)
{
    int i = 0;
    int count_words = 0;

    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            count_words++;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    return count_words;
}

char    **ft_split(char *str)
{
    char **res;
    int count_words;
    int i;
    int mount_char;
    int j;
    int tmp_i;
    k = 0;

    count_words = ft_count_words(str);
    j = 0;
    i = 0;
    mount_char = 0;
    res = (char **)malloc(sizeof(char*) * (count_words + 1));
    while (j < count_words)
    {
        /*
         * пропускаем пробелы
         * */
        while (str[i] && (str[i]== ' ' || str[i]== '\t' || str[i] == '\n'))
            i++;
        tmp_i = i;
        /*
         * бежим по млову до пробела
         * */
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            i++;
            mount_char++; /*считаем количество символов в слове*/
        }
        mount_char--;
        res[j] = (char*)malloc(sizeof(char) * (mount_char + 1));
        res[j][mount_char] = '\0';
        mount_char--;
        while (tmp_i < i)
        {

        }
        j++;
    }
}
int main(int ac, char **av)
{
//    printf("count_words = %d\n", ft_count_words(av[1]));
    return 0;
}