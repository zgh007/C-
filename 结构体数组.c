#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char *name;
    int score;
};

int main()
{
	
	struct Student stud[3];
    struct Student maxstud;
    struct Student minstud;
	int i;
    
    for(i = 0;i < sizeof(stud)/sizeof(stud[0]);i++){
		stud[i].name = (char *)malloc(128);
		printf("�������%d��ѧ��������\t",i+1);
        scanf("%s",stud[i].name);
        printf("�������%d��ѧ���ɼ���\t",i+1);
        scanf("%d",&stud[i].score);
    }
    
    maxstud.name = (char *)malloc(128);
    minstud.name = (char *)malloc(128);
    maxstud = stud[0];
    minstud = stud[0];
    for(i = 0;i < sizeof(stud)/sizeof(stud[0]);i++){
		if(stud[i].score > maxstud.score){
			maxstud = stud[i];
        }
        if(stud[i].score < minstud.score){
			minstud = stud[i];
        }
    }
    
    printf("��߳ɼ���ѧ�������ͳɼ��ǣ�\n");
    printf("%s:%d\n",maxstud.name,maxstud.score);
    printf("��ͳɼ���ѧ�������ͳɼ��ǣ�\n");
    printf("%s:%d\n",minstud.name,minstud.score);
    
	system("pause");
	return 0;
}
