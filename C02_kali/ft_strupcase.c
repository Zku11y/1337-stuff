#include <unistd.h>

char *ft_strupcase(char *str)
{
int i;
i = 0;
while(str[i])
{
if(str[i] >= 'a' && str[i] <= 'z'){
str[i] = str[i] - 32;
}
i++;
}

return str;
}

int main(void)
{
	char str[] = "this is a test 3434";
	ft_strupcase(str);
	write(1, str, sizeof(str));
}
