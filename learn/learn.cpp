#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct node {
	int data;
	struct node *next;
} node;

int main() {
	int n, i;
	node *p, *q, *r;
	cout << "input number n: " << endl;
	cin >> n;

	node* p = new node;
	p->data = 1;
	r = p;
	for(int i = 2; i <= n; i++) {
		node* q = new node;
		q->data = i;
		r->next = q;
		q->next = p;
		r = q;
	}

	for(int i = 0; i < n; i++) {
		p = p->next;
		q = q->next;
		if(i == n - 1) cout << p->data;
		else cout << p->data;
		q->next = p->next;
		r = p;
		p = p->next;
		delete(r);
	}

}