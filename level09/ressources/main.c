#include "stdio.h"

int main(int ac, char **av)
{
    int c;
    if (ac != 2)
    {
        printf("./a.out [text]\n");
        return (1);
    }
    printf("Starting to decrypt [%s]", av[1]);
    int i = 0;
    printf("Decrypted string = ");
    while(av[1][i])
    {
        printf("%c", av[1][i] - i);
        i++;
    }
    printf("\n");
    return (0);
}