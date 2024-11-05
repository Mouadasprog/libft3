/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:14:21 by mouad             #+#    #+#             */
/*   Updated: 2024/11/04 15:34:45 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  count_words(char const  *s,char c)
{
    int count = 0;
    int in_word = 0;
    while(*s)
    {
        if(*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if(*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return count;
}

static char *get_words(char const   *s,int  start,int   end)
{
    char    *word = (char *)malloc(end - start + 1);
    if(!word)
    {
        return NULL;
    }
    int i;
    i = 0;
    while(start < end)
    {
        word[i] = s[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return word;
}

char    **ft_split(char const   *s,char c)
{
    
}