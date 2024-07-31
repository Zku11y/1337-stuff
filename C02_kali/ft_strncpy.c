#include <unistd.h>
#include <stdio.h>


char *ft_strncpy(char *dest, char *src, unsigned int n)
{

int i;
i = 0;
while(i != n )
{
dest[i]=src[i];
i++;
}
dest[n] = '\0';
return dest;
}


int main(void)
{
	char dest[26];
	char src[] = "print this not this";
	ft_strncpy(dest, src, 11);
	printf("%s", dest);
}





