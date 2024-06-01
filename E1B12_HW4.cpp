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
    printf("�п�J�ﶵ:");
	
}
void a(){
	int n;
	
    printf("��J�ǥͼƥ�(5-10):"); 
    scanf("%d", &n);

    if (n < 5 || n > 10) {
        printf("���~���ǥͼƥ�!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("��J�H���ǥ� %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[studentCount].name);
        
        printf("ID (6-digit number): ");
        scanf("%d", &students[studentCount].id);
        if (students[studentCount].id < 100000 || students[studentCount].id > 999999) {
            printf("���~ID�A�^��D���C\n");
            return;
        }

        printf("�ƾǦ��Z(0-100): ");
        scanf("%d", &students[studentCount].math);
        if (students[studentCount].math < 0 || students[studentCount].math > 100) {
            printf("���~���Z�A�^��D���C\n");
            return;
        }

        printf("���z���Z(0-100): ");
        scanf("%d", &students[studentCount].physics);
        if (students[studentCount].physics < 0 || students[studentCount].physics > 100) {
            printf("���~���Z�A�^��D���C\n");
            return;
        }

        printf("�^�妨�Z(0-100): ");
        scanf("%d", &students[studentCount].english);
        if (students[studentCount].english < 0 || students[studentCount].english > 100) {
            printf("���~���Z�A�^��D���C\n");
            return;
        }

        students[studentCount].average = (students[studentCount].math + students[studentCount].physics + students[studentCount].english) / 3.0;
        studentCount++;
    }
    system("CLS");
}

void b(){
	for (int i = 0; i < studentCount; i++) {
        printf("�W�l: %s, ID: %d, �ƾ�: %d, ���z: %d, �^��: %d, ��������: %.1f\n",
               students[i].name, students[i].id, students[i].math, students[i].physics,
               students[i].english, students[i].average);
    }
    system("PAUSE");
    system("CLS");
}

void c(){
	
	char searchName[50];
    int found = 0;
    printf("��J�Q�n�j�M���ǥͦW�l: ");
    scanf("%s", searchName);

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("�W�l: %s, ID: %d, �ƾ�: %d, ���z: %d, �^��: %d, ��������: %.1f\n",students[i].name, students[i].id, students[i].math, students[i].physics,students[i].english, students[i].average);
            found = 1;
        }
    }
    
    if (found==0) {
        printf("�L���ǥ͡C\n");
    }
    
    system("PAUSE");
    system("CLS");
}

void d(){
	printf("�̥������Z�����C����:\n");
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
        printf("Name: %s, ID: %d, ����: %.1f\n",
               students[i].name, students[i].id, students[i].average);
    }

    system("PAUSE");
    system("CLS");
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
					printf("�T�w���}? (y/n): ");
					scanf(" %c", &choice);
					
					if (choice == 'y' || choice == 'Y') {
				        printf("Exiting system. Goodbye!\n");
				        return 0;
				    }
				    if (choice == 'n' || choice == 'n') {
				        printf("�^�D���C\n");
				        system("PAUSE");
	                	system("CLS");
	                	break;
				    }
				}
				
	            break;
	        default:
	            printf("���~��J�ﶵ�A�Э��s��J�C\n");
	    }
	}
    return 0;
}




	
