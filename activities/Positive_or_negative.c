#include <stdio.h>
int main(void){
    int Ian;
    float Dasmarinas;
    printf("enter two numbers: (int float) ");
    scanf("%i %f", &Ian, &Dasmarinas);
    if (Ian > 0){
        printf("%i is positive\n", Ian);
    } else if (Ian < 0){
        printf("%i is negative\n", Ian);
    } else{
        printf("%i is neutral\n", Ian);
    }
    if (Dasmarinas > 0){
        printf("%.2f is positive\n", Dasmarinas);
    } else if (Dasmarinas < 0){
        printf("%.2f is negative\n", Dasmarinas);
    } else {
        printf("%.2f is neutral\n", Dasmarinas);
    }
}