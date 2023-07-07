#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // Definindo variáveis
    int a;
    float b;
    char c;
    bool d;

    // Passando valores
    a = 10;
    b = 2.5;
    c = 'a';
    d = true;

    // Escrevendo variáveis na tela
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);
    printf("%d\n", d); // 1 = true; 0 = false;

    // Imprimindo com C++
    cout << a << endl;

    /* Lendo valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%c", &c);
    scanf("%d", &d); */

    // Lendo valores com C++
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    return 0;
}
