/* O programa immprime os números pares de 10 a 20.*/

#include <stdio.h>

int main()
{
    int a = 10;

    do {
        if (a % 2 == 0)
            printf("%d\n", a);
        a++;
    } while (a <= 20);

    return 0;
}
