#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	 int a[3] = {1,2,3};
     int *p;
     int (*arrayp)[3];
     
     p = a;
     arrayp = a;
     
     printf("%p\n",a);
     printf("%p\n",&a[0]);
     printf("%p\n",p);
     printf("%p\n",arrayp);
     printf("============Çø±ğ=========\n");
     printf("arrayp++address:%p\n",++arrayp);
     printf("p++adderss:%p\n",++p);
    
	system("pause");
	return 0;
}
