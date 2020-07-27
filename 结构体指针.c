#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int score;
    char name[128];
};

int main()
{
	
	struct Student stud = {77,"张三"};
    printf("%s:%d\n",stud.name,stud.score);
    struct Student *p;
    p = (char *)malloc(128);
    strcpy(p->name,"李四");
    p->score = 100;
    printf("%s:%d\n",p->name,p->score);
    
    free(p);
    p = &stud;
    printf("%s:%d\n",p->name,p->score);
        
	system("pause");
	return 0;
}
