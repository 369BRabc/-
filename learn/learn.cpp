#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	node* next;
};

node* create(int Array[]) {
	node *p, *pre, *head;
	head = new node;
	head->next = NULL;
	pre = head;
	for(int i = 0; i < 5; i++) {
		p = new node;
		p->data = Array[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return head;
}
int* p = new int;
node* p = new node;

int main() {
	int Array[5] = {5, 6, 7, 8, 9};
	node* L = create(Array);
	L = L->next;
	while(L != NULL){
		printf("%d", L->data);
		L = L->next;
	}
	return 0;
}