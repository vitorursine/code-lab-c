#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int l = 0;
    while (argv[1][i] != '\0') 
    {
        l++;
        i++;
    }

    printf("%d\n", l);
    
}