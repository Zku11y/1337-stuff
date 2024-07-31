#include <unistd.h>
#include <stdio.h>

int word_finder(char *str, char *to_find, int search_start, char *ptr)
{
    int i;
    i = 0;
    while(to_find[i])
    {
        if(str[search_start + i] == to_find[i]){
        i++;
        } else if(str[search_start + i] != to_find[i]) {
            ptr[0] = '\0';
            return 0;
        }
    }
    ptr = &str[search_start];
    return 0;
}

char *ft_strstr(char *str, char *to_find)
{
    char *ptr;
    if (to_find[0] == '\0')
    {
        printf("%s", "to_find is empty");
        return str;
    }
    int i;
    i = 0;
    while (str[i])
    {
        if(str[i] == to_find[0])
        {
            word_finder(str, to_find, i, ptr);
        }
        i++;
    }
    if (ptr[0] == '\0')
    {
        printf("couldnt find it");
        return ptr;
    } else if (*ptr == to_find[0])
    {
        printf("found it!");
        return ptr;
    }
}

int main(void)
{
    char to_find[] = "text";
    char str[] = "i have to find this text right here";
    ft_strstr(str, to_find);    
}