#include <stdio.h>
#include <stdlib.h>

int prepare(){

	printf("׼����\n");
	return 0;

}

int DIdi(){

	printf("��ε�\n");
    return 0;
}

int onTheRoad(){

	printf("��·��\n");
    DIdi();
	return 0;

}

int datting(){

	printf("Լ����\n");
    return 0;

}

int gobackHome(){

	printf("�ؼ�\n");
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
