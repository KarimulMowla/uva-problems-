#include<stdio.h>
int main()
{
    char cha;
    while ( scanf("%c",&cha)!=EOF)
    {
        if (cha=='1')
            printf("`");
        if (cha=='2')
            printf("1");
        if (cha=='3')
            printf("2");
        if (cha=='4')
            printf("3");
        if (cha=='5')
            printf("4");
        if (cha=='6')
            printf("5");
        if (cha=='7')
            printf("6");
        if (cha=='8')
            printf("7");
        if (cha=='9')
            printf("8");
        if (cha=='0')
            printf("9");
        if (cha=='-')
            printf("0");
        if (cha=='=')
            printf("-");
        if (cha=='W')
            printf("Q");
        if (cha=='E')
            printf("W");
        if (cha=='R')
            printf("E");
        if (cha=='T')
            printf("R");
        if (cha=='Y')
            printf("T");
        if (cha=='U')
            printf("Y");
        if (cha=='I')
            printf("U");
        if (cha=='O')
            printf("I");
        if (cha=='P')
            printf("O");
        if (cha=='[')
            printf("P");
        if (cha==']')
            printf("[");
        if (cha=='\\')
            printf("]");
        if (cha=='S')
            printf("A");
        if (cha=='D')
            printf("S");
        if (cha=='F')
            printf("D");
        if (cha=='G')
            printf("F");
        if (cha=='H')
            printf("G");
        if (cha=='J')
            printf("H");
        if (cha=='K')
            printf("J");
        if (cha=='L')
            printf("K");
        if (cha==';')
            printf("L");
        if (cha=='\'')
            printf(";");
        if (cha=='X')
            printf("Z");
        if (cha=='C')
            printf("X");
        if (cha=='V')
            printf("C");
        if (cha=='B')
            printf("V");
        if (cha=='N')
            printf("B");
        if (cha=='M')
            printf("N");
        if (cha==',')
            printf("M");
        if (cha=='.')
            printf(",");
        if (cha=='/')
            printf(".");
        if (cha==' ')
            printf(" ");
        if (cha=='\n')
            printf("\n");
    }
    return 0;
}