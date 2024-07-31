#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
int i;
int j;
j = 1;
int h;
h = 0;
i = 0;
if(str[0] == '\0')
{
j = 1;
}else
{
while(str[i] != '\0' && h == 0)
{
if(str[i] >= 'a' && str[i] <= 'z')
{
i++;
}else{
j = 0;
h = 1;
}
}
}
return j;
}


