#include "stdio.h" 

int main(void){
    int Ian;
    int Dasmarinas;
    printf("Enter a number: ");
    scanf("%d", &Ian);
    Dasmarinas = Ian;

    if(Dasmarinas % 2 == 0){
        printf("The number %d is even", Ian);
    } else{
        printf("The number %d is odd", Ian);
    }
}