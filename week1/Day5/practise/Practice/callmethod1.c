#include<stdio.h>
int main(int argc, char*argv[], char*envp[])
{
	void myaddition(void);
	int mysubtraction(void);
	void mymultiplication(int, int);
	int mydivision(int, int);

	int result_subtraction;
	int a_multiplication, b_multiplication;
	int a_division, b_division, result_division;

	myaddition();

	result_subtraction=mysubtraction();
	printf("\n\n");
	mysubtraction();
	printf("result of sub=%d\n",result_subtraction);

	printf("\n\n");
	printf("enter the integer value for 'a' for mul:");
	scanf("%d",&a_multiplication);

	printf("\n\n");
	printf("enter the integer value for 'b' for mul:");
	scanf("%d",&b_multiplication);
	mymultiplication(a_multiplication,b_multiplication);

	printf("\n\n");
	printf("enter the integer value for 'a' for div:");
    scanf("%d",&a_division);
    printf("enter the integer value for 'b' for div:");
    scanf("%d",&b_division);
	result_division=mydivision(a_division,b_division);
	printf("division of %d and %d gives=%d\n",a_division,b_division,result_division);
	printf("\n\n");
	return(0);
}
void myaddition(void)
{
	int a,b,sum;
	printf("enter the value for 'a'for add:");
	scanf("%d",&a);
	printf("eneter the value for 'b' for add:");
	scanf("%d",&b);
	sum=a+b;
	printf("\n\n");
	printf("sum of %d and %d=%d\n\n",a,b,sum);
}

int mysubtraction(void)
{
	 int a,b,sub;
        printf("enter the value for 'a'for sub:");
        scanf("%d",&a);
        printf("eneter the value for 'b' for sub:");
        scanf("%d",&b);
        sub=a-b;
        return(sub);
}

void mymultiplication(int a, int b)
{
	int multiplication;
	multiplication=a*b;
	//printf("\n\n");
	printf("multiplicatin of %d and %d=%d\n",a,b,multiplication);
}

int mydivision(int a, int b)
{
	int division_quotient;
	if(a>b)
		division_quotient=a/b;
	else
		division_quotient=b/a;
	return(division_quotient);
}