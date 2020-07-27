#include <stdio.h>
#include <stdlib.h>
int main()
{
	
    int meiHuaTai = 2;
	int juHuaTai = 10;
    
    int *p;
    p = &juHuaTai;
    
    *(p+1) = 8;
    
    printf("通过变量名取juHuaTai:%d\n",juHuaTai);
    printf("通过变量名取meiHuaTai:%d\n",meiHuaTai);
    
    printf("juHuaTai address:%p\n",p);
    printf("meiHuaTai address:%p\n",p+1);
    
	printf("通过地址取juHuaTai:%d\n",*(&juHuaTai));
    printf("通过地址取meiHuaTai:%d\n",*(&meiHuaTai));
    
    printf("指针访问juHuaTai:%d\n",*p);
	system("pause");
	return 0;
}
