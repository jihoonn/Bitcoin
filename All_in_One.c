#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int Excrate_dol()
{
	float excdol;  //�޷�ȯ��
	
	printf("1�޷�=____�� : ");
	scanf("%f", &excdol);
	
	return ; 
}

int Excrate_btc()
{
	float excbt;  //ȯ�� 
	
	printf("1��Ʈ����=____$ : ");
	scanf("%f", &excbt);
	
	return ; 
}
int Bitcoin()
{   
	int com;    //if�������� ���ÿɼ� 
	int amt1;   //������ 1
	int amt2;   //������ 2 
	float exc;  //ȯ�� 
	float won;  //  ?
	float result1;  //BT to $ 
	float result2;  //$ to BT
	
	printf("���ϴ� ����� �����ϼ���. \n\n");
	printf("1. ȯ�� ����\n\n2. ��Ʈ���� �� ���簡ġ\n\n3. ���簡ġ �� ��Ʈ����\n\n0. ó������\n\n");
	printf("������ ��� : ");
	scanf("%d", &com);
	
	if(com==1)     //ȯ������ 
	{
		printf("\n\n>ȯ�� ������ �����ϼ̽��ϴ�.\n\n>��ø� ��ٷ��ּ���.\n\n");
		printf("...\n\n");
		getch();
		
		Excrate_btc();  
		Bitcoin(); 
	}
	
	else if(com==2)     //BT to $
	{
		printf("\n\n��Ʈ���� �� ���簡ġ�� �����ϼ̽��ϴ�.\n\n");
		printf("���� �����Ͻ� ��Ʈ������ �Է����ּ���.\n\n");
		printf("(������ ���� �Է����ּ���)\n\n");
		printf("������ : ");
		scanf("%d", &amt1);
		printf("\n��ȯ�� �Ϸ�Ǿ����ϴ�.\n\n");
		printf("����� ���� ���� ��Ʈ������ ȯ���� �ݾ���...\n\n");
		getch();
		printf("��\n\n");
		result1=amt1*exc;
		printf("%f$  �Դϴ�.\n\n", result1);
		return ;
	}
	else if(com==3)     //$ to BT
	{
		printf("\n\n���簡ġ �� ��Ʈ������ �����ϼ̽��ϴ�.\n\n");
		printf("���� �����ϰ� ��� �������� �Է����ּ���\n\n");
		printf("(������ ���� �Է����ּ���)\n\n");
		printf("������ : ");
		scanf("%d", &amt2);
		printf("\n��ȯ�� �Ϸ�Ǿ����ϴ�.\n\n");
		printf("����� ���� �������� ��Ʈ�������� ȯ���� �ݾ���...\n\n");
		getch();
		printf("��\n\n");
		result2=amt2/exc;
		printf("%f BT  �Դϴ�.\n\n", result2);
		Bitcoin();
	}
	else if(com==0)
	{
		return ;
	}
	else      //undefined
	{
		printf("\n\n���ǵ��� ���� ����Դϴ�.\n\n");
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
	
	
	printf("ȯ���� �ٲٽ÷��� 1\n\n");
	printf("�޷��� ��ȭ�� �ٲٰ� �ʹٸ� 2\n\n");
	printf("��ȭ�� �޷��� �ٲٰ� �ʹٸ� 3\n\n");
	printf("                             �� �Է����ּ���.\n\n");
	printf("�Է��ϱ� ---> ");
	scanf("%d", &opt);
	
	if(opt==2)
	{
		printf("���� ������ ��� �޷����� �Է����ּ���.\n\n");
		scanf("%f", &dollar);
		
		printf("\n\n��ȯ�� �Ϸ�Ǿ����ϴ�.\n\n");
		printf("����� ���� ���� �޷��� ��ȭ�� ȯ���� �ݾ���...\n\n");
		getch();
		printf("��\n\n");
		result1=dollar*excdol;
		printf("%f��  �Դϴ�.\n\n", result1);
		return ;
	}
	if(opt==3)
	{
		printf("���� ������ ��� ��ȭ���� �Է����ּ���.\n\n");
		scanf("%f", &won);
		
		printf("\n\n��ȯ�� �Ϸ�Ǿ����ϴ�.\n\n");
		printf("����� ���� ���� ��ȭ�� �޷��� ȯ���� �ݾ���...\n\n");
		getch();
		printf("��\n\n");
		result2=won/excdol;
		printf("%f$  �Դϴ�.\n\n", result2);
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
		printf("\n-�������� : %d \n\n", rand());
		printf("\n����� �׶��׶� ���ϴ� ���� �������ּ���. \n");
		printf("��, ���� ��뿡�� �ٲ� �� �����Ƿ� ����� �μž� �մϴ�.\n\n");		
		
	return ;
}
int main()
{
	int choice;
	
	while(choice>0)
	{
	printf("��������������������������������������������\n");
	printf("��      <���ϴ� ����� �����ϼ���.>       ��\n\n");
	printf("��     �������ھ�ȣ�� �����Ͻ÷��� ��     ��\n\n");
	printf("��    ȯ���� ���� ���� ����Ͻ÷��� ��    ��\n\n");
	printf("��  ��Ʈ������ ������ġ�� �ٲٽ÷��� ��   ��\n\n");
	printf("��       ���α׷��� �����Ͻ÷��� 0        ��\n\n");
	printf("��������������������������������������������\n\n");
	printf("�� �Է����ּ���.     :     ");
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
		printf("\n���α׷��� �����մϴ�.\n\n");
		return 0;
	}
	}
	system("pause");
	return 0;
}
