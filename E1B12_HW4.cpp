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
int studentCount=0;
void menu();
void a();
void b();
void c();
void d();

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
void a(){
	int n;
	
    printf("輸入學生數目(5-10):"); 
    scanf("%d", &n);

    if (n < 5 || n > 10) {
        printf("錯誤的學生數目!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("輸入信息學生 %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[studentCount].name);
        
        printf("ID (6-digit number): ");
        scanf("%d", &students[studentCount].id);
        if (students[studentCount].id < 100000 || students[studentCount].id > 999999) {
            printf("錯誤ID，回到主選單。\n");
            return;
        }

        printf("數學成績(0-100): ");
        scanf("%d", &students[studentCount].math);
        if (students[studentCount].math < 0 || students[studentCount].math > 100) {
            printf("錯誤成績，回到主選單。\n");
            return;
        }

        printf("物理成績(0-100): ");
        scanf("%d", &students[studentCount].physics);
        if (students[studentCount].physics < 0 || students[studentCount].physics > 100) {
            printf("錯誤成績，回到主選單。\n");
            return;
        }

        printf("英文成績(0-100): ");
        scanf("%d", &students[studentCount].english);
        if (students[studentCount].english < 0 || students[studentCount].english > 100) {
            printf("錯誤成績，回到主選單。\n");
            return;
        }

        students[studentCount].average = (students[studentCount].math + students[studentCount].physics + students[studentCount].english) / 3.0;
        studentCount++;
    }
    system("CLS");
}

void b(){
	for (int i = 0; i < studentCount; i++) {
        printf("名子: %s, ID: %d, 數學: %d, 物理: %d, 英文: %d, 平均分數: %.1f\n",
               students[i].name, students[i].id, students[i].math, students[i].physics,
               students[i].english, students[i].average);
    }
    system("PAUSE");
    system("CLS");
}

void c(){
	
	char searchName[50];
    int found = 0;
    printf("輸入想要搜尋的學生名子: ");
    scanf("%s", searchName);

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("名子: %s, ID: %d, 數學: %d, 物理: %d, 英文: %d, 平均分數: %.1f\n",students[i].name, students[i].id, students[i].math, students[i].physics,students[i].english, students[i].average);
            found = 1;
        }
    }
    
    if (found==0) {
        printf("無此學生。\n");
    }
    
    system("PAUSE");
    system("CLS");
}

void d(){
	printf("依平均成績的高低順序:\n");
	for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                people temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < studentCount; i++) {
        printf("Name: %s, ID: %d, 平均: %.1f\n",
               students[i].name, students[i].id, students[i].average);
    }

    system("PAUSE");
    system("CLS");
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
    
    while(1){
    	char choice;
	    menu();
	    scanf(" %c", &choice);
		
	    switch (choice) {
	        case 'a':
	        	system("CLS");
	            a();
	            break;
	        case 'b':
	        	system("CLS");
	            b();
	            break;
	        case 'c':
	        	system("CLS");
	            c();
	            break;
	        case 'd':
	        	system("CLS");
	            d();
	            break;
	        case 'e':
	        	char choice;
				while(1){
					printf("確定離開? (y/n): ");
					scanf(" %c", &choice);
					
					if (choice == 'y' || choice == 'Y') {
				        printf("Exiting system. Goodbye!\n");
				        return 0;
				    }
				    if (choice == 'n' || choice == 'n') {
				        printf("回主選單。\n");
				        system("PAUSE");
	                	system("CLS");
	                	break;
				    }
				}
				
	            break;
	        default:
	            printf("錯誤輸入選項，請重新輸入。\n");
	    }
	}
    return 0;
}




	
