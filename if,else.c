#include <stdio.h>
#include <stdlib.h>

/*int main()
{
	int tmp;
	int airmachine;
    
    printf("please give a tmp\n");
    scanf("%d",&tmp);
    if(tmp > 30){
		printf("please give a airmachine\n");
		scanf("%d",&airmachine);
		if(airmachine == 0){
			printf("�򿪷���\n");
			printf("tmp>30:%d,airmachine == 0:%d\n",tmp>30,airmachine ==0);
        }
        else{
			printf("�رշ���\n");
			printf("tmp>30:%d,airmachine == 0:%d\n",tmp>30,airmachine ==0);
        }
        
    }
    else{
		printf("�رշ���\n");
		printf("tmp>30:%d,airmachine == 0:%d\n",tmp>30,airmachine ==0);
    }
     
	system("pause");
	return 0;
}
*/

int main()
{

	int score;

	printf("������ɼ���\n");
    scanf("%d",&score);
    
    if(score >= 90){
		printf("�ɼ����㣡\n");
    }
    else if(score >= 75&&score < 90){
		printf("�ɼ����ã�\n");
    }
    else if(score >= 60&&score <75){
		printf("�ɼ��еȣ�\n");
    }
    else{
		printf("�ɼ��ϲ\n");
    }

	system("pause");
    return 0;
}





























