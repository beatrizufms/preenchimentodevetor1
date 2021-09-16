#include <stdio.h>

/*autor: Beatriz Lima
  ano: 2021
  disciplína: AlgProg2*/

/*Leia um valor e faça um programa que coloque
o valor lido na primeira posição de um vetor N[10].
Em cada posição subsequente, coloque o dobro do valor da posição anterior.
Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e
assim sucessivamente. Mostre o vetor em seguida.
*/
int main()
{
    int x = 0;
    int a;
    int n[10];

    scanf("%d", &a);

    for(; a<=50; )
    {
        n[0] = a;
        n[1] = a*2;
        a = n[1];
        n[2] = a*2;
        a = n[2];
        n[3] = a*2;
        a = n[3];
        n[4] = a*2;
        a = n[4];
        n[5] = a*2;
        a = n[5];
        n[6] = a*2;
        a = n[6];
        n[7] = a*2;
        a = n[7];
        n[8] = a*2;
        a = n[8];
        n[9] = a*2;
        a = n[9];
    }
    printf("N[0] = %d\n", n[0]);
    printf("N[1] = %d\n", n[1]);
    printf("N[2] = %d\n", n[2]);
    printf("N[3] = %d\n", n[3]);
    printf("N[4] = %d\n", n[4]);
    printf("N[5] = %d\n", n[5]);
    printf("N[6] = %d\n", n[6]);
    printf("N[7] = %d\n", n[7]);
    printf("N[8] = %d\n", n[8]);
    printf("N[9] = %d\n", n[9]);
    return 0;
}
