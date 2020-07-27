#include <stdio.h>
#include <stdlib.h>

struct Test
{
	int data;
	struct Test *next;
};

void printLink(struct Test *head){
	struct Test *point = NULL;
	point = head;
	while(point != NULL){
		printf("%d  ",point->data);
		point = point->next;
	}
	putchar('\n');
}

struct Test *insertData(struct Test *head,struct Test *new){
		if(head == NULL){
			head = new;
			return head;
		}else{
			new->next = head;
			head = new;	
		}
	return head;
}

struct Test *insertDatabehind(struct Test *head,struct Test *new){
	struct Test *p = NULL;
	p = head;
	if(p == NULL){
		head = new;
		return head;
	}
	while(p->next != NULL){
		p = p->next;
	}
	p->next = new;
	return head;
}

struct Test *creatLink (struct Test *head){
	struct Test *new;
	while(1){
		new = (struct Test *)malloc(sizeof(struct Test));
		printf("input node data:");
		scanf("%d",&(new->data));
		if(new->data == 0){
			printf("0 quit\n");
			return head;
		}
		head = insertData(head,new);
	}
	return head;
}

int main()
{
	struct Test *head = NULL;
	printf("创建连表\n");
	head = creatLink(head);
	printLink(head);
	printf("向已有链表插入数据\n");
	struct Test t = {55,NULL};
	struct Test t1 = {88,NULL};
	head = insertData(head,&t);
	head = insertDatabehind(head,&t1);
	printLink(head);

	return 0;
}
