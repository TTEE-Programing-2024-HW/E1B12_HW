#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void dm() {
	printf(" ----------[Booking System]----------- \n");
    printf(" | a. Available seats                | \n");
    printf(" | b. Arrange for you                | \n");
    printf(" | c. Choose by yourself             | \n");
    printf(" | d. Exit                           | \n");
    printf(" ------------------------------------- \n");
	printf("�п�J�ﶵ: ");
	printf("\n ");
}



int main(){
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	printf("||(?���f��)?????       ||(??_?)||       ?????('�f '?)||\n");
	system("PAUSE");	// �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��C
	system("CLS");		// �M���ù�
	
	int password,n=1;
	printf("�п�J4�ӼƦr���K�X\n");
	scanf("%d",&password);
	while(1){
		if(password==2024){
			break;
		}
		else if(n<3){
			printf("�K�X���~\n");
			n++;
			scanf("%d",&password);
		}
		else{
			printf("�K�X���~ĵ�i\n");
			printf("%c",'\a');	//��Xĵ�i�n�T
			return 0;
		}
	}
	system("CLS");	// �M���ù�
	
	int a=9,b=9;			//a�C,b�� 
	char seats[a][b];
	for (int i = 0; i <a; i++) {
        for (int j = 0; j <b; j++) {
            seats[i][j] = '-';
        }
    }
	//int a=(rand() % (�̤j��-�̤p��+1) ) + �̤p��
	int book= 0;
    srand(time(NULL));
    while (book < 10) {
        int row = rand() % a;
        int col = rand() % b;
        if (seats[row][col] == '-') {
            seats[row][col] = '*';
            book++;
        }
    }

	
	
	char e;
    while(1){
        dm();
        scanf("%s",&e);
        switch (e) {
            case 'a':
                char ch;
				printf(" \\123456789\n");
				for (int i = 0; i < a; i++){
					printf("%d ", 9 - i);
   				    for (int j= 0; j < b; j++) {
   				    	printf("%c", seats[i][j]);
   				    	}
   				    	printf("\n");
					}
				system("PAUSE");
				system("CLS");
				
                break;
                
			case 'b':
                int n;
                printf("�ݭn�X�Ӯy��(1~4): ");
                scanf("%d", &n);
                if (n < 1 || n > 4) {
                    printf("�L�Ī��Ʀr�A��^�D���C\n");
                    system("PAUSE");
                }
                else{
                int found = 0;
                while (found==0) {
                    int row = rand() % a;
                    int col = rand() % (b - n + 1);

                    if (n <= 3) {
                        int ok = 1;
                        for (int i = 0; i < n; i++) {
                            if (seats[row][col + i] != '-') {
                                ok = 0;
                                break;
                            }
                        }
                        if (ok==1) {
                            for (int i = 0; i < n; i++) {
                                seats[row][col + i] = '@';
                            }
                            found = 1;
                        }
                    }
                    
					else if (n == 4) {
                        int ok = 1;
                        for (int i = 0; i < n; i++) {
                            if (seats[row][col + i] != '-') {
                                ok = 0;
                                break;
                            }
                        }
                        if (ok==1) {
                            for (int i = 0; i < n; i++) {
                                seats[row][col + i] = '@';
                            }
                            found = 1;
                        } else {
                        	
							int row2 = (row + 1) % a;
                            int col2 = rand() % (b - 1);
                            if (seats[row][col] == '-' && seats[row][col + 1] == '-' && seats[row+1][col] == '-' && seats[row+1][col2 + 1] == '-') {
                                seats[row][col] = '@';
                                seats[row][col + 1] = '@';
                                seats[row+1][col] = '@';
                                seats[row+1][col + 1] = '@';
                                found = 1;
                            }
                        }
                    }
                }
                
                printf("  123456789\n");
                for (int i = 0; i < a; i++) {
                    printf("%d ", 9 - i);
                    for (int j = 0; j < b; j++) {
                        printf("%c", seats[i][j]);
                    }
                    printf("\n");
                }
				char choose;
                printf("�O�_���N�y��w�� (y/n)�H");
                
                scanf(" %c", &choose);
                if (choose == 'y' || choose == 'Y') {
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < b; j++) {
                            if (seats[i][j] == '@') {
                                seats[i][j] = '*';
                            }
                        }
                    }
                    printf("�w�q���\\n");
                }
				else {
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < b; j++) {
                            if (seats[i][j] == '@') {
                                seats[i][j] = '-';
                            }
                        }
                    }
                    printf("�w�q����\n\n");
                }
                system("PAUSE");
                system("CLS");
            	}
            	
                break;
                
            case 'c':
                char own[5];
                while(1){
                	printf("��J�y���ܡA�Ҧp1-2(�N��C1,��2)�A�`�N���n�Ů�A��Jq��^�D���:\n");
                	char a1,b1;
                	scanf("%s",&own);
                	if(own[0]=='q'){
                		system("CLS");
                		break;
					}
                	if('1'<=own[0] && own[0]<='9'){
                		a1=own[0]-'0';
                		
                		if(own[1]=='-'){
                			
                			if('1'<=own[2]&&own[2]<='9'){
                				b1=own[2]-'0';
                				if(seats[9-a1][b1-1]=='-'){
                					seats[9-a1][b1-1]='@';
                					printf(" \\123456789\n");
									for (int i = 0; i < a; i++){
										printf("%d ", 9 - i);
					   				    for (int j= 0; j < b; j++) {
					   				    	printf("%c", seats[i][j]);
					   				    	}
					   				    	printf("\n");
									}
									seats[9-a1][b1-1]='*';
									
									printf("�q�즨�\\");
									printf("\n");
								}
								else{
									printf("��J���~(�榡���~�έ���)\n");
                					system("PAUSE");
                					
                					
								}
                				
							}
							else{
								printf("��J���~(�榡���~�έ���)\n");
                				system("PAUSE");
                				
							}
						}
						else{
							printf("��J���~(�榡���~�έ���)\n");
                			system("PAUSE");
                			
						}
					}
                	else{
                		printf("��J���~(�榡���~�έ���)\n");
                		system("PAUSE");
                		system("CLS");
                		break;
					}
				}
                
                
                
                break;
                
                
            case 'd':
                char yn;
                printf("Continue? (y/n): ");
                scanf(" %c", &yn);
                if (yn == 'n' || yn == 'N') {
                    printf("�����{��\n");
                    return 0;
                } else if (yn != 'y' && yn != 'Y') {
                    printf("���~���s��J\n");
                }
                break;
                
                
            default:
                printf("���~���s��J\n");				//E1B12_HW3.c
            	
        }
    }
	
	return 0;
}




		/*	�o�����{���@�~��H�����٭n�·г\�h�A�b�s�g�{����
			�L�{���ɭԤ@���p�ߴN�|���ͳ\�h���W�䧮��bug�A�ר�
			�O�H�۵{���V�ӶV���Abug�N�U�[���e����X�A�b�̫�H
			���ﶵc��������g�X�A�g���ݨӬO�ڧC���F���A���M��
			�_b�ٮe���o�h�A�̫��ı�o�̫�@���@�~�i�H�X�o��²
		  	��@�I�C											*/ 
