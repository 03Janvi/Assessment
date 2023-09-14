#include<stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
	int opretor;
	do{
	
	printf("----------------Menu-----------------\n");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("Enter your choice from the menu:");
	scanf("%d",&opretor);
	switch(opretor)
	{
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:
			div();
			break;
			
		default:
			printf("invalid choice");

    }
}
while(opretor<5 && opretor>0);
	
	return 0;
}
void add()
{
	int a,b,ans;
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	ans=a+b;
	printf("The addition is : %d\n",ans);
}
void sub()
{
	int a,b,ans;
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	ans=a-b;
	printf("The substraction is : %d\n",ans);
}
void mul()
{
	int a,b,ans;
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	ans=a*b;
	printf("The multiplication is : %d\n",ans);
}
void div()
{
	int a,b,ans;
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	ans=a/b;
	printf("The division is : %d\n",ans);
}


