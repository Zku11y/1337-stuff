#include <unistd.h>


int main(void)
{
int i;
i = 0;
char *j;

while(i <= 9)
{
j[i] = 'a';
i++;
}

write(1, &j, 9);

}
