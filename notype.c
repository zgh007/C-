#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	 int n;
     printf("please inout the size of array:\t");
     scanf("%d",&n);
     //int a[n];
     int *a = (int *)malloc(n*sizeof(int));
     int i;
	 if(a == NULL){
		printf("ERROR!!!\n");
     }
     for(i = 0;i<n;i++){
		printf("please input %d data:\t",i+1);
        scanf("%d",&a[i]);
     }
     putchar('\n');
     for(i = 0;i<n;i++){
		printf("%d data is:%d\n",i+1,*a++);
     }
    
	system("pause");
	return 0;
}
