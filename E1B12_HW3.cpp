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
	
	int a=9,b=9;			//a列,b行 
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
                printf("需要幾個座位(1~4): ");
                scanf("%d", &n);
                if (n < 1 || n > 4) {
                    printf("無效的數字，返回主選單。\n");
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
                printf("是否滿意座位安排 (y/n)？");
                
                scanf(" %c", &choose);
                if (choose == 'y' || choose == 'Y') {
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < b; j++) {
                            if (seats[i][j] == '@') {
                                seats[i][j] = '*';
                            }
                        }
                    }
                    printf("預訂成功\n");
                }
				else {
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < b; j++) {
                            if (seats[i][j] == '@') {
                                seats[i][j] = '-';
                            }
                        }
                    }
                    printf("預訂失敗\n\n");
                }
                system("PAUSE");
                system("CLS");
            	}
            	
                break;
                
            case 'c':
                char own[5];
                while(1){
                	printf("輸入座位選擇，例如1-2(代表列1,行2)，注意不要空格，輸入q返回主選單:\n");
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
									
									printf("訂位成功\");
									printf("\n");
								}
								else{
									printf("輸入錯誤(格式錯誤或重位)\n");
                					system("PAUSE");
                					
                					
								}
                				
							}
							else{
								printf("輸入錯誤(格式錯誤或重位)\n");
                				system("PAUSE");
                				
							}
						}
						else{
							printf("輸入錯誤(格式錯誤或重位)\n");
                			system("PAUSE");
                			
						}
					}
                	else{
                		printf("輸入錯誤(格式錯誤或重位)\n");
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
                    printf("結束程式\n");
                    return 0;
                } else if (yn != 'y' && yn != 'Y') {
                    printf("錯誤重新輸入\n");
                }
                break;
                
                
            default:
                printf("錯誤重新輸入\n");				//E1B12_HW3.c
            	
        }
    }
	
	return 0;
}




		/*	這次的程式作業比以往的還要麻煩許多，在編寫程式的
			過程有時候一不小心就會產生許多莫名其妙的bug，尤其
			是隨著程式越來越長，bug就愈加不容易找出，在最後以
			為選項c能夠輕易寫出，寫完看來是我低估了它，雖然比
			起b還容易得多，最後我覺得最後一次作業可以出得更簡
		  	單一點。											*/ 
