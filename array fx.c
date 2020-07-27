#include <stdio.h>
#include <stdlib.h>

void arrayPrint(int array[],int cnt){//传入数组的是数组的地址
	int j;
    
    for(j = 0;j<cnt;j++){
		printf("%d  ",array[j]);
    }
    putchar('\n');
}

int main()
{
	int array[5] = {1,2,3};
    int array1[3] = {1,2,3};
    
	arrayPrint(array,sizeof(array)/sizeof(int));
	printf("array size:%d\n",sizeof(array));
    
    printf("address of array:%p\n",array);
    printf("address of array[0]:%p\n",array[0]);
    printf("address of array[1]:%p\n",array[1]);
    
    printf("address of array1:%p\n",array1);
    printf("address of array1[0]:%p\n",array1[0]);
    printf("address of array1[1]:%p\n",array1[1]);
    
	system("pause");
	return 0;
}
