#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int data;
    int i;
    
	printf("������ɼ�����Ŀ��");
    scanf("%d",&i);
	//while(i--){
    for(i;i > 0;i--){
		printf("������ɼ�\t");
		scanf("%d",&data);
		if(data == 100){
			printf("��ϲ�㿼������\n");
		}
		else{
			switch(data/10){
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				printf("��δ���������Ŭ����\n");
				break;
				case 6:
				case 7:
				printf("�㼰���ˣ������Ŭ����\n");
				break;
				case 8:
				printf("�ɼ����ã�\n");
				break;
				case 9:
				printf("�ɼ����㣡\n");
				break;
				default:
				printf("�Ƿ��ɼ�\n");
				break;
			}
		}
    }
    
	system("pause");
	return 0;
}
