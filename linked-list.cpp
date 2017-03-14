#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *next;
};
struct node *start = NULL;

void addLast(int data){
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
}

int main() {
	addLast(1);
	addLast(2);
	addLast(3);
	addLast(4);
	
	print();
	
	return 0;
}