#include <stdio.h>
#include<stdlib.h>

int add(int data1,int data2){
	return data1+data2;
}

int sub(int data1,int data2){
	return data1-data2;
}

int mul(int data1, int data2){
	return data1*data2;
}

float chu(int data1,int data2){
	return (float)data1/data2;
}

void tips(){
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%������һ���㷨��+-*/%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
}

int suanfatip(char suanfa){
	switch(suanfa){
		case '+':
			printf("��ѡ���˼ӷ�\n");
            break;
        case '-':
			printf("��ѡ���˼���\n");
            break;
        case '*':
			printf("��ѡ���˳˷�\n");
            break;
        case '/':
			printf("��ѡ���˳���\n");
            break;
		default:
			return -1;
            break;
    }
}

void opersuanfa(int data1,int data2,char suanfa){
	switch(suanfa){
		case '+':
			printf("�ӷ����Ϊ��%d+%d = %d\n",data1,data2,add(data1,data2));
            break;
        case '-':
			printf("�������Ϊ��%d-%d = %d\n",data1,data2,sub(data1,data2));
            break;
        case '*':
			printf("�˷����Ϊ��%d*%d = %d\n",data1,data2,mul(data1,data2));
            break;
        case '/':
			printf("�������Ϊ��%d/%d = %f\n",data1,data2,chu(data1,data2));
            break;
        default:
			break;
    }
}

int calc(char suanfa){
	int data1;
    int data2;
    int panduan;
    
    panduan = suanfatip(suanfa);
    
	if(panduan == -1){
		return -1;
    }
    
    printf("�������һ������\t");
    scanf("%d",&data1);
    printf("������ڶ�������\t");
    scanf("%d",&data2);
    opersuanfa(data1,data2,suanfa);
}

int main()
{
	char suanfa;
    int panduan;
    int mark;
    
    mark = 0;
    
    while(1){
		tips();
		if(mark != 0){
			getchar();
        }
        mark = 1;
        scanf("%c",&suanfa);
        panduan = calc(suanfa);
        if(panduan == -1){
			printf("�����㷨����\n");
        }
    }
    
    system("pause");
    return 0;	
}
