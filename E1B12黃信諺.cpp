#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void dm() {
	printf(" ----------[Booking System]----------- \n");
    printf(" | a. Available seats                |\n");
    printf(" | b. Arrange for you                |\n");
    printf(" | c. Choose by yourself             |\n");
    printf(" | d. Exit                           |\n");
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
	
	int a=9,b=9;
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
				printf("\\123456789\n");
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
                printf("�п�J�ݭn�X�Ӯy��(1~4): ");
                scanf("%d", &n);
            //    mult(n);
                break;
                
            case 'c':
                
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
                printf("���~���s��J\n");
            	
        }
    }
    
	return 0;
}
