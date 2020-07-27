#include <stdio.h>

struct Test{
	int data;
	struct Test *next;
};

void printLink(struct Test *head){
	struct Test *point = NULL;
	point = head;
	while(point != NULL){
		printf("%d\t",point->data);
		point = point->next;
	}
	putchar('\n');
}

int getLinkLength(struct Test *head){
	int count = 0;
	while(head != NULL){
		count++;
		head = head->next;
	}
	return count;
}

int searchLinkData(struct Test *head,int data){
	while(head != NULL){
		if(head->data == data){
			return 1;
		}
		head = head->next;
	}
	return 0;
}

int insertData(struct Test *head,struct Test *new,int data){
	struct Test *point;
	point  = head;
	while(point != NULL){
		if(point->data == data){
			new->next = point->next;
			point->next = new;
			return 1;
		}
		point = point->next;
	}
	return 0;
}

struct Test* insertDatafor(struct Test *head,struct Test *new,int data){
	struct Test *point;
	point  = head;
	if(point->data == data){
		new->next = head;
		printf("在头部插入成功\n");
		return new;
	}
	while(point->next != NULL){
		if(point->next->data == data){
			new->next = point->next;
			point->next = new;
			printf("插入成功\n");
			return head;
		}
		point = point->next;
	}
	printf("插入失败\n");
	return head;
}

struct Test* dropData(struct Test *head,int data){
	struct Test *point;
	point  = head;
	if(point->data == data){
		printf("删除了头部节点\n");
		return point->next;
	}
	while(point->next != NULL){
		if(point->next->data == data){
			point->next = point->next->next;
			printf("删除成功\n");
			return head;
		}
		point = point->next;
	}
	printf("删除失败\n");
	return head;
}

int main()
{
	int i;
	int length;
	int ret;
	struct Test *head = NULL;

	int array[] = {1,2,3};
	for(i = 0;i<sizeof(array)/sizeof(array[0]);i++){
		printf("%d\t",array[i]);
	}
	putchar('\n');
	struct Test t1 = {1,NULL};
	struct Test t2 = {2,NULL};
	struct Test t3 = {3,NULL};
	struct Test t4 = {4,NULL};
	struct Test new = {100,NULL};
	struct Test new1 = {101,NULL};

	head = &t1;
	t1.next = &t2;
	t2.next = &t3;
	t3.next = &t4;
	//t5.next = t3.next;
	//t3.next = &t5;
	//printf("%d\t%d\t%d\n",t1.data,t1.next->data,t1.next->next->data);
	insertData(head,&new,2);
	head = insertDatafor(head,&new1,2);
	printLink(head);
	head = dropData(head,2);
	printLink(head);
	length = getLinkLength(head);
	printf("link length is:%d\n",length);
	ret = searchLinkData(head,2);
	if(ret == 1){
		printf("have:2\n" );
	}else{
		printf("no 2\n");
	}

	return 0;
}

