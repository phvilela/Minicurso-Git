#include <stdio.h>
#include <stdlib.h>
#include "fib.h"
#include "fat.h"
/*Nome da dupla:
    - Matheus
    - Pedro
*/
int main(int argc, char* argv[]){
    int input = atoi(argv[1]);

    char* nomeFib = NOME_FIB;
    char* nomeFat = NOME_FAT;

    printf("Codigo Fib desenvolvido por %s\t: Fib(%d) = %d\n",nomeFib,input,fibonacci(input));
    printf("Codigo Fat desenvolvido por %s\t: Fat(%d) = %d\n",nomeFat,input,fatorial(input));
    printf("\n");

}
