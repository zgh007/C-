#include <stdio.h>
#include <stdlib.h>

void buyRice(){

	printf("去买米\n");

}

void printWelcome(){

	printf("*******************\n");
	printf("*******************\n");
    printf("*******函数********\n");
    printf("*******************\n");
    printf("*******************\n");
    
}

void buyRice2(int jinshu){

	printf("去买%d斤米\n",jinshu);
    jinshu++;
    printf("%d\n",jinshu);
    printf("jinshu address = %p\n",&jinshu);

}

int main()
{
	int a;
    
    a = 10;
    printWelcome();
	buyRice();
	buyRice2(a);
    printf("main a = %d\n",a);
    printf("main a address = %p\n",&a);
    
	system("pause");
	return 0;
}
