#include <stdio.h>
#include <stdlib.h>
int main()
{
	
    int meiHuaTai = 2;
	int juHuaTai = 10;
    
    int *p;
    p = &juHuaTai;
    
    *(p+1) = 8;
    
    printf("ͨ��������ȡjuHuaTai:%d\n",juHuaTai);
    printf("ͨ��������ȡmeiHuaTai:%d\n",meiHuaTai);
    
    printf("juHuaTai address:%p\n",p);
    printf("meiHuaTai address:%p\n",p+1);
    
	printf("ͨ����ַȡjuHuaTai:%d\n",*(&juHuaTai));
    printf("ͨ����ַȡmeiHuaTai:%d\n",*(&meiHuaTai));
    
    printf("ָ�����juHuaTai:%d\n",*p);
	system("pause");
	return 0;
}
