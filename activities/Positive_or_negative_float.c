#include <stdio.h>
int main(void){
    float Ian;
    float Dasmarinas;
    printf("enter two numbers: (float float) ");
    scanf("%f %f", &Ian, &Dasmarinas);
    if (Ian > 0){
        printf("%.2f is positive\n", Ian);
    } else if (Ian < 0){
        printf("%.2f is negative\n", Ian);
    } else{
        printf("%.2f is neutral\n", Ian);
    }
    if (Dasmarinas > 0){
        printf("%.2f is positive\n", Dasmarinas);
    } else if (Dasmarinas < 0){
        printf("%.2f is negative\n", Dasmarinas);
    } else {
        printf("%.2f is neutral\n", Dasmarinas);
    }
}