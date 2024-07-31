#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
int i;
i = 0;
while(str[i])
{
	if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
	i++;
	}else{
	write(1, &"incorrect", 9);
	return 0;
	}
}
write(1, &"correct", 8);
return 1;
}

int main(void)
{
	char str[] = "";
	ft_str_is_alpha(str);
}
