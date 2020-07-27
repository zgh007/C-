#include <stdio.h>
#include <stdlib.h>

int prepare(){

	printf("准备中\n");
	return 0;

}

int DIdi(){

	printf("打滴滴\n");
    return 0;
}

int onTheRoad(){

	printf("在路上\n");
    DIdi();
	return 0;

}

int datting(){

	printf("约会中\n");
    return 0;

}

int gobackHome(){

	printf("回家\n");
    return 0;

}

int main()
{
	
	prepare();
    onTheRoad();
    datting();
    gobackHome();
    
	system("pause");
	return 0;
}
