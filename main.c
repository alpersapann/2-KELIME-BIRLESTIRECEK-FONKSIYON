#include <stdio.h>
#include <stdlib.h>

void birlestiren(x, y){
    strcat(x, y);
    printf(x);
}

int main()
{
    char dizi[50], dizi2[50];

    printf("2 ayri kelime gir: ");
    gets(dizi);
    gets(dizi2);
    birlestiren(dizi, dizi2);

    return 0;
}
