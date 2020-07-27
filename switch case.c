#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int data;
    int i;
    
	printf("请输入成绩的数目：");
    scanf("%d",&i);
	//while(i--){
    for(i;i > 0;i--){
		printf("请输入成绩\t");
		scanf("%d",&data);
		if(data == 100){
			printf("恭喜你考得满分\n");
		}
		else{
			switch(data/10){
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				printf("你未及格，请继续努力！\n");
				break;
				case 6:
				case 7:
				printf("你及格了，请继续努力！\n");
				break;
				case 8:
				printf("成绩良好！\n");
				break;
				case 9:
				printf("成绩优秀！\n");
				break;
				default:
				printf("非法成绩\n");
				break;
			}
		}
    }
    
	system("pause");
	return 0;
}
