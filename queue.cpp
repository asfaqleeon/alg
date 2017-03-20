#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *next;
};
struct node *start = NULL;

void pop(){
	struct node *t1=start, *t2=start->next;
	free(start);
	start = t2;
}

void push(int data){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	
	if(start == NULL){
		start = temp;
	}
	else {
		struct node *s = start;
		
		while(s->next != NULL){
			s = s->next;
		}
		s->next=temp;
	}
}

void print(){
	struct node *temp = start;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
	cout<<"----"<<endl;
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	
	print();
	pop();
	print();
	pop();
	print();
	pop();
	print();
	push(5);
	print();
	
	return 0;
}