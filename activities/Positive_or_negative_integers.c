#include <stdio.h>
int main(void){
    int Ian;
    int Dasmarinas;
    printf("enter two numbers: (int int) ");
    scanf("%i %i", &Ian, &Dasmarinas);
    if (Ian > 0){
        printf("%i is positive\n", Ian);
    } else if (Ian < 0){
        printf("%i is negative\n", Ian);
    } else{
        printf("%i is neutral\n", Ian);
    }
    if (Dasmarinas > 0){
        printf("%i is positive\n", Dasmarinas);
    } else if (Dasmarinas < 0){
        printf("%i is negative\n", Dasmarinas);
    } else {
        printf("%i is neutral\n", Dasmarinas);
    }
}