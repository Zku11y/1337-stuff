#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    i = 0;
    while(i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    i = 0;
    while(src[i])
    {  
       i++;
    }              
    return i;
    
int main(void)
{
    char src[] = "copy to here not to here";
    dest[12];
    ft_strlcpy(dest, src, 12);
    printf("%s", dest);
}
    
    
    
    
    
    
    
    
}

