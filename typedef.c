#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
	int score;
    char *name;
}STU,*PSTU;

int main()
{
	
	STU stu;
    stu.score = 100;
    printf("%d\n",stu.score);
    
    PSTU pstu;
    pstu = (PSTU)malloc(sizeof(STU));
	pstu->score = 200;
    printf("%d\n",pstu->score);
    
	system("pause");
	return 0;
}
