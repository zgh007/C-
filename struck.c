#include <stdio.h>
#include <stdlib.h>

void func(){
	printf("��Ӵ��������Ŷ��\n");
}

struct Student
{
	char name[20];
    int score;
    char sno[13];
    void (*p)();
};

int main()
{
	
	struct Student stud = {"��ī",97,"201810224137",func};
    printf("name:%s\n",stud.name);
    printf("sno:%s\n",stud.sno);
    printf("score:%d\n",stud.score);
    stud.p();
    
	system("pause");
	return 0;
}
