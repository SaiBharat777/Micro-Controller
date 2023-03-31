#include<stdio.h>
int main(int argc, char *argv[], char *envp[])
{
	void display_information(void);
	void function_country(void);

	display_information();
	function_country();

	return 0;
}

void display_information(void)
{
	void function_my(void);
	void function_name(void);
	void function_is(void);
	void function_firstname(void);
        void function_middlename(void);
        void function_surname(void);
        void function_OfAMC(void);

	function_my();
        function_name();
        function_is();
        function_firstname();
	function_middlename();
	function_surname();
	function_OfAMC();
}

void function_my(void)
{
	printf("\nmy");
}

void function_name(void)
{
        printf("\nname");
}

void function_is(void)
{
        printf("\nis");
}

void function_firstname(void)
{
        printf("\nBharat");
}

void function_middlename(void)
{
        printf("\nSai");
}

void function_surname(void)
{
        printf("\nNomula");
}

void function_OfAMC(void)
{
        printf("\nOf Phytech");
}

void function_country(void)
{
	printf("\nI live in India.\n\n");
}	








