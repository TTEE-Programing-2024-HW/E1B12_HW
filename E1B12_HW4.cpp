#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct people{
    char name[50];
    int id;
    int math;
    int physics;
    int english;
    float average;
};
people students[10];

void menu();
void a();
void b();
void c();
void d();			//E1B12_HW4.cpp

void menu(){
	
	printf("------------[Grade System]----------\n");
    printf("| a. Enter student grades          |\n");
    printf("| b. Display student grades        |\n");
    printf("| c. Search for student grades     |\n");
    printf("| d. Grade ranking                 |\n");
    printf("| e. Exit system                   |\n");
    printf("------------------------------------\n");
    printf("請輸入選項:");
	
}


int main() {
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||O ▽ O)||       ?????('口 '?)||\n");
	system("PAUSE");	// 螢幕畫面暫停，並等待使用者按任意鍵。
	system("CLS");		// clear
	
	
	char password[10];
    int key=1;
    while (1) {
        printf("請輸入4個數字的密碼: ");
        scanf("%s",password);

        if (strcmp(password, "2024") == 0) {
            printf("Welcome!\n");
            break;
        }
		else if(key<3){
            printf("錯誤密碼\n");
            key++;
        }
        else{
        	printf("密碼錯誤，超過輸入上限!\n");
        	return 0;
		}
    }
    system("CLS");
    
    
    
    char choice;
    menu();
    scanf(" %c", &choice);
	
    switch (choice) {
        case 'a':
            //a();
            
            break;
        case 'b':
            //b();
            break;
        case 'c':
            //c();
            break;
        case 'd':
            //d();
            break;
        case 'e':
        	
            break;
        default:
            printf("錯誤輸入選項，請重新輸入。\n");
    }
    
    
    return 0;
}




	
