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
    printf("�п�J�ﶵ:");
	
}


int main() {
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||O �� O)||       ?????('�f '?)||\n");
	system("PAUSE");	// �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��C
	system("CLS");		// clear
	
	
	char password[10];
    int key=1;
    while (1) {
        printf("�п�J4�ӼƦr���K�X: ");
        scanf("%s",password);

        if (strcmp(password, "2024") == 0) {
            printf("Welcome!\n");
            break;
        }
		else if(key<3){
            printf("���~�K�X\n");
            key++;
        }
        else{
        	printf("�K�X���~�A�W�L��J�W��!\n");
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
            printf("���~��J�ﶵ�A�Э��s��J�C\n");
    }
    
    
    return 0;
}




	
