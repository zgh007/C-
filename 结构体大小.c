#include <stdio.h>
#include <stdlib.h>

struct s1
{
	char c;
    double d;
	int i;
};

struct s2
{
	char c;
    int i;
    double d;
};

struct s3
{
	char c;
    int i;
    char str[10];
    double d;
};


struct s4
{
	char c;
    int i;
    double d;
    char str[10];
};

struct s5
{
	char c;
    int i;
    double d;
    char str[10];
    struct s
	{
		char c;
		double d;
		int i;
	} stmp;
};

struct s6
{
	char c;
    int i;
    double d;
    char str[10];
    union{
		char b;
        double a;
    };
};

#pragma pack(4)

struct s7
{
	char c;
    double d;
	int i;
};

int main()
{
	printf("s1:%d\n",sizeof(struct s1));
    printf("s2:%d\n",sizeof(struct s2));
    printf("s3:%d\n",sizeof(struct s3));
    printf("s4:%d\n",sizeof(struct s4));
    printf("s5:%d\n",sizeof(struct s5));
    printf("s6:%d\n",sizeof(struct s6));
	printf("s7:%d\n",sizeof(struct s7));
    
    system("pause");
	return 0;
}
