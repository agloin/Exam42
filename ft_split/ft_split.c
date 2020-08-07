/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:24:55 by agloin            #+#    #+#             */
/*   Updated: 2020/08/07 18:32:47 by null             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_count_words(char *str)
{
    int i;
    int mount_words;

    mount_words = 0;
    i = 0;
    while(str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            mount_words++;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            i++;
        }
    }
    return (mount_words);
}


char    **ft_split(char *str)
{
    char **res = NULL;
//    char *tmp_str;
    int mount_of_words;
    int mount_malloc;
    int i = 0;
    int j = 0;
    int k = 0;

    mount_of_words = ft_count_words(str);
    if (mount_of_words == 0)
        return res;
    res = (char **)malloc(sizeof(char *) * mount_of_words);

    while (mount_of_words > 0)
    {
        mount_malloc = 1;
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            i++;
            mount_malloc++;
        }
        k = i; // фиксируем значени i
        i--;
        res[j] = (char *)malloc(sizeof(char) * mount_malloc);
        mount_malloc--;
        res[j][mount_malloc] = '\0';

        while (mount_malloc > 0)
        {
            mount_malloc--;
            res[j][mount_malloc] = str[i];
            i--;
        }
        i = k; //возвращаем i прежнее значение
        j++;
        mount_of_words--;
    }
    res[j] = NULL;
    return res;
}

int main()
{
    char *str = "541541\thshsghsghf\nhsdhsgfh ";

//    printf("%d\n", ft_count_words(str));
    int i = 0;
    char **res = ft_split(str);
    while (res && res[i])
    {
        printf("%s ", res[i]);
        i++;
    }

    return 0;
}