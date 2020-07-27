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
			printf("打开风扇\n");
			printf("tmp>30:%d,airmachine == 0:%d\n",tmp>30,airmachine ==0);
        }
        else{
			printf("关闭风扇\n");
			printf("tmp>30:%d,airmachine == 0:%d\n",tmp>30,airmachine ==0);
        }
        
    }
    else{
		printf("关闭风扇\n");
		printf("tmp>30:%d,airmachine == 0:%d\n",tmp>30,airmachine ==0);
    }
     
	system("pause");
	return 0;
}
*/

int main()
{

	int score;

	printf("请输入成绩：\n");
    scanf("%d",&score);
    
    if(score >= 90){
		printf("成绩优秀！\n");
    }
    else if(score >= 75&&score < 90){
		printf("成绩良好！\n");
    }
    else if(score >= 60&&score <75){
		printf("成绩中等！\n");
    }
    else{
		printf("成绩较差！\n");
    }

	system("pause");
    return 0;
}





























