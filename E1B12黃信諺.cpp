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
	printf("請輸入選項: ");
	printf("\n ");
}



int main(){
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	printf("||(?ˋ口ˊ)?????       ||(??_?)||       ?????('口 '?)||\n");
	system("PAUSE");	// 螢幕畫面暫停，並等待使用者按任意鍵。
	system("CLS");		// 清除螢幕
	
	int password,n=1;
	printf("請輸入4個數字的密碼\n");
	scanf("%d",&password);
	while(1){
		if(password==2024){
			break;
		}
		else if(n<3){
			printf("密碼錯誤\n");
			n++;
			scanf("%d",&password);
		}
		else{
			printf("密碼錯誤警告\n");
			printf("%c",'\a');	//輸出警告聲響
			return 0;
		}
	}
	system("CLS");	// 清除螢幕
	
	int a=9,b=9;
	char seats[a][b];
	for (int i = 0; i <a; i++) {
        for (int j = 0; j <b; j++) {
            seats[i][j] = '-';
        }
    }
	//int a=(rand() % (最大值-最小值+1) ) + 最小值
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
                printf("請輸入需要幾個座位(1~4): ");
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
                    printf("結束程式\n");
                    return 0;
                } else if (yn != 'y' && yn != 'Y') {
                    printf("錯誤重新輸入\n");
                }
                break;
                
                
            default:
                printf("錯誤重新輸入\n");
            	
        }
    }
    
	return 0;
}
