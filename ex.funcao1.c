#include<stdio.h>


void imprimirnome(){

    printf("\nJose Eduardo Carlos Rotondo");
    printf("\nJoao Benicio Besteti Rotondo");
}

void multiplica(int num1, int num2){

    printf("\nO resultado da multiplicacao eh: %d", num1 * num2);
    return num1 * num2;
}

float pi(){

    return 3.1415;
}



int main(){

    int num1,num2;

    
    printf("\nInsira 2 valores: ");
    scanf("%d%d", &num1, &num2);
    

    imprimirnome();
    multiplica(num1,num2);
    printf("\nO valor de PI eh: %.4f\n\n",pi());

    return 0;
}