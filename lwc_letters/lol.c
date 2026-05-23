#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])

{
   for (int i = 0; argv[1][i] != 0; i++) 
   {
    argv[1][i] = tolower(argv[1][i]);
   }

   printf("%s\n", argv[1]);
}