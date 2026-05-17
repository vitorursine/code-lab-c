#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int h = atoi(argv[1]);

    for (int a = 1; a <= h; a++) //a esta relacionado ao numero de '#'
    {
        for (int s = ( h - a ); s > 0; s--)
        {
            printf(" ");
        }
        for (int c = 0; c < a; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}