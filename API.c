#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	
	char *str = "hahahaha";
    puts(str);                         //����ַ���
    printf("%s\n",str);
    
    char *str1 = (char *)malloc(128);  //ע���ڴ�й©
    if(str1 == NULL){                  //malloc����ռ�ʧ��
		printf("ERROR!!!\n");
        exit(-1);
    }
    memset(str1,'\0',128);          //��ʼ��
    printf("�������ַ�����\n");
    gets(str1);                     //�Ӽ�����ɨ���ȡ�ַ�
    puts(str1);
    
    
	system("pause");
	return 0;
}
