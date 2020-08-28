
#include <stdlib.h>
#include <stdio.h>

int     count_words(char *str)
{
    int i;
    int count_words;

    i = 0;
    count_words = 0;
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
    int count_w;
    char **res;
    int i;
    int count_ch;
    int j;
    int tmp_i;

    i = 0;
    j = 0;
    count_ch = 0;
    count_w = count_words(str);
    res = (char **)malloc(sizeof(char*) * (count_w + 1));
    while (count_w > 0)
    {
        count_ch = 1;
        /*
         * пропускае пробелы
         */
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        /*
         * считаем количество имволов в слове (count_ch)
         */
        while (str[i] && str[i] != ' ' && str[i] != '\t' &&  str[i] != '\n')
        {
            i++;
            count_ch++;
        }
        /*
         * Запоминаем (i - 1),  так как i сейчас находится на символе "пробел" или "таб" или "новая строка"
         */
        tmp_i = i - 1;
        /*
         *
         */
        count_ch--;
//        printf("count_ch = %d ", count_ch);
        res[j] = (char *)malloc(sizeof(char) * (count_ch + 1));
        res[j][count_ch] = '\0';
        count_ch--;
        while (count_ch >= 0)
        {
            res[j][count_ch] = str[tmp_i];
//            printf("%c ", res[j][count_ch]);
            tmp_i--;
            count_ch--;
        }
        count_w--;
        j++;
    }
    res[j] = NULL;
    return res;
}

int main()
{
    int i;
    char *str = " \n  Java Core\ne\tSpring c6842 rag 604062     ";

    i = 0;
    while (ft_split(str)[i])
    {
        printf("%s ", ft_split(str)[i]);
        i++;
    }

    return 0;
}