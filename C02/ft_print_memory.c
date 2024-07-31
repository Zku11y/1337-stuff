#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char test = 'a';
    char *ptr = &test;
    printf("%p", &test);
}
