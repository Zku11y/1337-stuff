#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    int a;
    int b;
    i = 0;
    a = 0;
    b = 0;
    while (s1[i] && i < n)
    {
        a = s1[i] + a;
        i++;
    }
    i = 0;
    while(s2[i] && i < n)
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
    ft_strncmp(s1, s2, 1);
}
