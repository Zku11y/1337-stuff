#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while(dest[j])
    {
        j++;
    }

    while(src[i] && i < nb)
    {
        dest[j + i] = src[i];
        i++;
    }
    dest[j + i] = '\0';
    return dest;
}

int main(void)
{
    char dest[10] = "Hello ";
    char src[] = "Bro";
    ft_strncat(dest, src, 4);
    printf("%s", dest);
}