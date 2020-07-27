#include <stdio.h>
#include <stdlib.h>
int main()
{
	int array[100] = {0};
    int sum;
    int i;
    //int sum1;
	//int a;
    
    sum = 0;
    //sum1 = 0;
    for(i = 1;i<=100;i++)
    {
		//a = i;
        //sum1 = sum1+a;
		array[i-1] = i;
    }
    for(i = 0;i<100;i++)
    {
		sum+= array[i];
    }
    
    //printf("%d\n",sum1);
    printf("%d\n",sum);
    printf("%p\n",sum);
    printf("%p\n",array[0]);
    printf("%p\n",array[1]);
    
	system("pause");
	return 0;
}
