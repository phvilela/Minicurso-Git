#include <stdio.h>
#include <stdlib.h>
#include "fib.h"
#include "fat.h"
/*Nome da dupla:
    - Matheus
    - Pedro
*/
int main(int argc, char* argv[]){
    int input2, input;
    if(argc == 2){
      input = atoi(argv[1]);
      input2 = input;
    }else if(argc==3){
      input = atoi(argv[1]), input2 = atoi(argv[2]);
    }
        
    
    char* nomeFib = NOME_FIB;
    char* nomeFat = NOME_FAT;

    printf("Codigo Fib desenvolvido por %s\t: Fib(%d) = %d\n",nomeFib,input,fibonacci(input));
    printf("Codigo Fat desenvolvido por %s\t: Fat(%d) = %d\n",nomeFat,input2,fatorial(input2));
    printf("\n");

}
