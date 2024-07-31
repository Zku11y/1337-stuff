#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int a;
    int b;
    i = 0;
    a = 0;
    b = 0;
    while (s1[i])
    {
        a = s1[i] + a;
        i++;
    }
    i = 0;
    while(s2[i])
    {
        b = s2[i] + b;
        i++;
    }
    i = a - b;
    printf("%d", i);
    return i;
}

int main(void)
{
    char s1[] = "abc";
    char s2[] = "Abc";
    ft_strcmp(s1, s2);
}
