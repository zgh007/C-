#include <stdio.h>
#include <stdlib.h>

void test1(){

	int data;
    
    data = 10;
    printf("test1:data = %d\n",data);

}

void test2(){

	int data;
    
    data = 100;
    printf("test2:data = %d\n",data);

}

int main()
{
	
	test1();
    test2();
    
	system("pause");
	return 0;
}
