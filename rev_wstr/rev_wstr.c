/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 15:35:29 by agloin            #+#    #+#             */
/*   Updated: 2020/08/19 15:35:32 by agloin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

/*
 * "abcdefghijklm"
 */
void    rev_wstr(char *str)
{
    int i;
    int tmp_i;

    tmp_i = 0;
    i = 0;
    while (str[i])
        i++; //здесь мы нвходимся на "\0"
    i--;
    while (i > 0)
    {
        while (i > 0 && str[i] != ' ' && str[i] != '\t')
            i--;
        if (i == 0)
            tmp_i = 0;
        else
            tmp_i = i + 1;
        while (i >= 0 && str[tmp_i] && str[tmp_i] != ' ' && str[i] != '\t')
        {
            write(1, &str[tmp_i], 1);
            tmp_i++;
        }
        if (i != 0)
            write(1, " ", 1);
        while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
            i--;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_wstr(argv[1]);
    write(1, "\n", 1);
    return 0;
}