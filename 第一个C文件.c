#include <stdio.h>
#include <stdlib.h>
int main()//�������ڣ�����ϵͳ����һ���������ҵ�exe��main���ֵ�λ��
{
	
	system("ipconfig");
    system("color 3");
    printf("Hello World !\n");
    
    int num1;
    int num2;
    int num3;
    int num4;
    char *p;
    p = &num4;
    num4 = 0x11222345;
    printf("���������ݣ�");
    scanf("%d %d",&num1,&num2);//˫�����г���ռλ����������Ҫд�κη���
	num3 = num1+num2;
    printf("%d+%d=%d\n",num1,num2,num3);
	printf("%x\n",p[1]);
    
	system("pause");//systemΪwidows���pauseָ�����õȴ��û����룬��ɳ���������֮ǰ�������
	return 0;
}
