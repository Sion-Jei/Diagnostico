#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char cad[30];
    printf("Ingrese cadena: ");
    scanf("%s", &cad);
    int g=0;
    int k=0;
    while(cad[g]!= '\0'){
        int cont=0;
        while(cad[k]!= '\0' && cad[g]==cad[k]){
            printf("%c", cad[k]);
            cont=cont+1;
            k=k+1;
        }
        printf("%d", cont);
        g=k;
    }
}
