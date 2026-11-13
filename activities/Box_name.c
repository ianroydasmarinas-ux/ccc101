#include "stdio.h"
#include "windows.h"

void gotoxy(int x, int y){
    COORD c = {(SHORT)x, (SHORT)y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

}

int main(void){
    int x, y;
    char name[] = "Ian Roy";
    system("cls");

    for(x = 0; x <= 122; x++){
        system("cls");
        gotoxy(x, 0);
        printf("%s", name);
    }
    for(y = 1; y <= 25; y++){
        system("cls");
        gotoxy(122, y);
        printf("%s", name);
    }
    for(x = 122; x >= 0; x--){
        system("cls");
        gotoxy(x, 25);
        printf("%s", name);
    }
    for(y = 25; y >= 1; y--){
        system("cls");
        gotoxy(0, y);
        printf("%s", name);
    }
gotoxy(0,25);
getchar();

return(0);
}