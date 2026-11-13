#include <stdio.h>

void main(){
    int Ian;
    int Dasmarinas;
    printf("Enter a number: ");
    scanf("%d", &Ian);
    Dasmarinas = Ian;
    while(Dasmarinas>=2){
        Dasmarinas = Dasmarinas - 2;
    }
    if(Dasmarinas==0){
        printf("The number %d is even", Ian);
    } else{
        printf("The number %d is odd", Ian);
    }
}