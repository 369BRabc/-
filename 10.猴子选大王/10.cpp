/*
	N个猴子围成一个圈
	1、从第一只猴子开始报数，第一只猴子报1
	2、每个报2的猴子退出，然后从下一只猴子重新开始报数，
	3、要求输出退出的顺序和最后剩下的人
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include<malloc.h>

using namespace std;

/*---构造结构体---*/
typedef struct node
{
	int data;
	struct node *next;
} node;

int main()
{
	int n,i;
	node *p,*q,*r;//p是工作指针，q指向p的前一个节点，r是尾指针
	printf("请输入猴子的数目：");
	scanf("%d",&n);

	/*---构造循环单链表---*/
	p=(node*)malloc(sizeof(node));
	p->data=1;
	r=p;
	for(i=2;i<=n;i++)						//构造N个节点
	{
		q=(node*)malloc(sizeof(node));
		q->data=i;
		r->next=q;
		q->next=p;							//指向头节点
		r=q;								//尾指针后移
	}
	/*--遍历，将第2的猴子出局---*/
	for(i=0;i<n;i++)
	{
		p=p->next;
		q=q->next;
		if(i==n-1)
			printf("最后留下的猴子为：%d号\n",p->data);
		else
			printf("出局的猴子为：%d号\n",p->data);
		q->next=p->next;
		r=p;
		p=p->next;
		free(r);
	}
	system("pause");
	return 0;
}