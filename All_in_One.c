#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int Excrate_dol()
{
	float excdol;  //달러환율
	
	printf("1달러=____원 : ");
	scanf("%f", &excdol);
	
	return ; 
}

int Excrate_btc()
{
	float excbt;  //환율 
	
	printf("1비트코인=____$ : ");
	scanf("%f", &excbt);
	
	return ; 
}
int Bitcoin()
{   
	int com;    //if문에서의 선택옵션 
	int amt1;   //보유량 1
	int amt2;   //보유량 2 
	float exc;  //환율 
	float won;  //  ?
	float result1;  //BT to $ 
	float result2;  //$ to BT
	
	printf("원하는 명령을 선택하세요. \n\n");
	printf("1. 환율 변경\n\n2. 비트코인 → 현재가치\n\n3. 현재가치 → 비트코인\n\n0. 처음으로\n\n");
	printf("선택할 명령 : ");
	scanf("%d", &com);
	
	if(com==1)     //환율변경 
	{
		printf("\n\n>환율 변경을 선택하셨습니다.\n\n>잠시만 기다려주세요.\n\n");
		printf("...\n\n");
		getch();
		
		Excrate_btc();  
		Bitcoin(); 
	}
	
	else if(com==2)     //BT to $
	{
		printf("\n\n비트코인 → 현재가치를 선택하셨습니다.\n\n");
		printf("현재 보유하신 비트코인을 입력해주세요.\n\n");
		printf("(단위는 빼고 입력해주세요)\n\n");
		printf("보유량 : ");
		scanf("%d", &amt1);
		printf("\n변환이 완료되었습니다.\n\n");
		printf("당신의 현재 보유 비트코인을 환산한 금액은...\n\n");
		getch();
		printf("총\n\n");
		result1=amt1*exc;
		printf("%f$  입니다.\n\n", result1);
		return ;
	}
	else if(com==3)     //$ to BT
	{
		printf("\n\n현재가치 → 비트코인을 선택하셨습니다.\n\n");
		printf("현재 보유하고 계신 소지금을 입력해주세요\n\n");
		printf("(단위는 빼고 입력해주세요)\n\n");
		printf("보유량 : ");
		scanf("%d", &amt2);
		printf("\n변환이 완료되었습니다.\n\n");
		printf("당신의 현재 소지금을 비트코인으로 환산한 금액은...\n\n");
		getch();
		printf("총\n\n");
		result2=amt2/exc;
		printf("%f BT  입니다.\n\n", result2);
		Bitcoin();
	}
	else if(com==0)
	{
		return ;
	}
	else      //undefined
	{
		printf("\n\n정의되지 않은 명령입니다.\n\n");
		Bitcoin();
	}
	return ;  
}
int Exc()
{
	int opt;
	float dollar, won;
	float excdol;
	float result1, result2;
	
	
	printf("환율을 바꾸시려면 1\n\n");
	printf("달러를 원화로 바꾸고 싶다면 2\n\n");
	printf("원화를 달러로 바꾸고 싶다면 3\n\n");
	printf("                             을 입력해주세요.\n\n");
	printf("입력하기 ---> ");
	scanf("%d", &opt);
	
	if(opt==2)
	{
		printf("현재 가지고 계신 달러량을 입력해주세요.\n\n");
		scanf("%f", &dollar);
		
		printf("\n\n변환이 완료되었습니다.\n\n");
		printf("당신의 현재 보유 달러를 원화로 환산한 금액은...\n\n");
		getch();
		printf("총\n\n");
		result1=dollar*excdol;
		printf("%f원  입니다.\n\n", result1);
		return ;
	}
	if(opt==3)
	{
		printf("현재 가지고 계신 원화량을 입력해주세요.\n\n");
		scanf("%f", &won);
		
		printf("\n\n변환이 완료되었습니다.\n\n");
		printf("당신의 현재 보유 원화를 달러로 환산한 금액은...\n\n");
		getch();
		printf("총\n\n");
		result2=won/excdol;
		printf("%f$  입니다.\n\n", result2);
		return ;
	}
	if(opt==1)
	{
		Excrate_dol();
		Exc();
	}
	return ;
}
int RandNum()
{
	int i;
	int num;
	srand((int)time(NULL));
	
	
	for(i=0; i<1 ; i++)
		printf("\n-랜덤정수 : %d \n\n", rand());
		printf("\n사용은 그때그때 원하는 수로 설정해주세요. \n");
		printf("단, 다음 사용에는 바뀔 수 있으므로 기억해 두셔야 합니다.\n\n");		
		
	return ;
}
int main()
{
	int choice;
	
	while(choice>0)
	{
	printf("┌────────────────────┐\n");
	printf("│      <원하는 명령을 선택하세요.>       │\n\n");
	printf("│     랜덤숫자암호를 설정하시려면 ①     │\n\n");
	printf("│    환율을 통해 돈을 계산하시려면 ②    │\n\n");
	printf("│  비트코인을 실제가치로 바꾸시려면 ③   │\n\n");
	printf("│       프로그램을 종료하시려면 0        │\n\n");
	printf("└────────────────────┘\n\n");
	printf("을 입력해주세요.     :     ");
	scanf("%d", &choice);
	
	if(choice==1)
	{
		RandNum();
		
	}
	else if(choice==2)
	{
		Exc();
		
	}
	else if(choice==3)
	{
		Bitcoin();
	}
	else if(choice==0)
	{
		printf("\n프로그램을 종료합니다.\n\n");
		return 0;
	}
	}
	system("pause");
	return 0;
}
