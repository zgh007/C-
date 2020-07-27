#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int score;
    char *name;
};

void initSrudent(struct Student *p,int len){
	int i;
    for(i = 0;i < len;i++){
		printf("请输入学生姓名：\t");
		p->name = (char *)malloc(128);
        scanf("%s",(p->name));
        printf("请输入成绩：\t");
        scanf("%d",&(p->score));
        p++;
    }
}

void printSrudent(struct Student *p,int len){
	int i;
    for(i = 0;i < len;i++){
		printf("%s:%d\n",p->name,p->score);
        p++;
    }
}

struct Student *getMax(struct Student *p,int len){
	struct Student *max = p;
    int i;
    for(i = 0;i < len;i++){
		if(max->score<p->score){
			max = p;
		}
		p++;
    }
    return max;
}

struct Student *getMin(struct Student *p,int len){
	struct Student *min = p;
    int i;
    for(i = 0;i < len;i++){
		if(min->score>p->score){
			min = p;
		}
		p++;
    }
    return min;
}

float getAvg(struct Student *p,int len){
	int total = 0;
    int i;
    for(i = 0;i < len;i++){
		total+=p->score;
        p++;
    }
    return (float)total/len;
}

void printEnd(struct Student *max,struct Student *min,float avg){
	printf("max:%s:%d\n",max->name,max->score);
    printf("min:%s:%d\n",min->name,min->score);
    printf("avg = %f\n",avg);
}

int findInfo(struct Student *p,int len,struct Student *find){
	int i;
	for(i = 0;i < len;i++){
		if(strcmp(p->name,find->name) == 0){
            return 1;
        }
        p++;
    }
    return 0;
    
}

int main()
{
	int len;    
    printf("请输入学生人数：\t");
    scanf("%d",&len);

	struct Student *p = (struct Student *)malloc(len*sizeof(struct Student));
    struct Student *min = NULL;
    struct Student *max = NULL;
    struct Student *find = (struct Student *)malloc(len*sizeof(struct Student));
    float avg = 0;
    
    initSrudent(p,len);
    printSrudent(p,len);
    max = getMax(p,len);
    min = getMin(p,len);
	avg = getAvg(p,len);
    printEnd(max,min,avg);
    
    int ret = 0;
    while(!ret){
		printf("请输入你要查找的学生姓名：\t");
		find->name = (char *)malloc(128);
		find->score = 0;
		scanf("%s",find->name);
		ret = findInfo(p,len,find);
		if(ret == 0){
			printf("查无此人\n");
		}
		else{
			printf("存在此人\n");
		}
	}
	system("pause");
	return 0;
}
