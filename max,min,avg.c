#include <stdio.h>
#include <stdlib.h>

void inputData(int *data,int len){
	int i;
    
	printf("please input %d datas\n",len);
    for(i = 0;i<len;i++){
		printf("please input %d data:\t",i+1);
        scanf("%d",data);
        if(*data>100||*data<0){
			printf("data error!!!\n");
            i--;
            data--;
        }
        data++;
    }
    putchar('\n');

}

int getMax(int *data,int len){
	int i;
	int max;
    
    max = *data;
	for(i = 0;i<len;i++){
		if(max<=*data){
			max = *data;
        }
        data++;
    }
    
    return max;
}

int getMin(int *data,int len){
	int i;
	int min;
    
    min = *data;
	for(i = 0;i<len;i++){
		if(min>=*data){
			min = *data;
        }
        data++;
    }
    
    return min;
}

float getAvg(int *data,int len){
	int i;
    int sum;
    float avg;
    
    sum = 0;
    for(i = 0;i<len;i++){
		sum+=*data;
        data++;
    }
    avg = (float)sum/len;
    
    return avg;
}

void printMaxMinAvg(int max,int min,float avg){
	printf("max of datas:%d\n",max);
    printf("min of datas:%d\n",min);
    printf("avg of datas:%f\n",avg);
}

int main()
{
	int score[10] = {0};
    int len;
    int max;
    int min;
    float avg;
    
    len = sizeof(score)/sizeof(int);
    inputData(score,len);
    max = getMax(score,len);
    min = getMin(score,len);
    avg = getAvg(score,len);
    printMaxMinAvg(max,min,avg);
    
	system("pause");
	return 0;
}
