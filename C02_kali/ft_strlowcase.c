#include <unistd.h>

char *ft_strupcase(char *str)
{
int i;
i = 0;
while(str[i])
{
	if (str[i] >= 'A' && str[i] <= 'Z'){
	str[i] = str[i] + 32;
	}
	i++;
}
return str;
}

int main(void)
{
	char str[] = "THIS is A teSt TesXt 43w 2";
	ft_strupcase(str);
	write(1, str, sizeof(str));
}
