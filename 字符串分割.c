#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	
	//×Ö·û´®µÄ²ð·Ö
    char str[] = "zhu/guo/he/np";
    char *parray[10] = {NULL};
	int i;
    
    i = 1;
    parray[i-1] = strtok(str,"/");
    while(parray[i-1]!=NULL){
		i++;
        parray[i-1] = strtok(NULL,"/");
    }
    
    int j;
    for(j = 0;j<i;j++){
		puts(parray[j]);
    }
    
	system("pause");
	return 0;
}
