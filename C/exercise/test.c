#include <stdio.h>

int main(void)
{
    int ch1, ch2;

    ch1 = getchar();
    ch2 = getchar();
//      ch2 = fgetc(stdin);

    putchar(ch1);
    putchar(ch2);
  //  fputc(ch2, stdout);

    return 0;
}