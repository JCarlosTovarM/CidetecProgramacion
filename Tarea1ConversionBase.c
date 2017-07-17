/*
TAREA 1 CONVERSION DE DECIMAL A BINARIO, HEXADECIMAL Y OCTAL
TOVAR MUNOZ JOSE CARLOS
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    short x, b;
    int i;
    printf("x=");
    scanf("%hd",&x);
    printf("\n DECIMAL: %d",x);
    printf("\n HEXADECIMAL:");
    for(i=3; i<16; i=i+4){
        b=x>>(15-i);
        b=b&15;
        printf("%x",b);//Hexadecimal
    }
    
	printf("\n BINARIO:");
    for(i=0; i<16; i++){
        b=x>>(15-i);
        b=b&1;
        printf("%d",b);//Hexadecimal
    }
    printf("\n OCTAL: %o",x); //OCTAL

    return 0;
}

