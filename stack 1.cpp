#include <iostream>
using namespace std;
class node{	
	public:
		int data;
		node * next;
		node(int val){
		data=val;
		next = NULL;
		}
	};
class Stack{
	node * head = NULL;
	node * top = NULL;
	public:
	void push(int val){	
		node * n = new node(val);
		if (head==NULL){
		head = n;
		top = n;
		return;
		}
		node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
		top = n;
	}
	
	bool isEmpty(node* head){
		return (head==NULL);
	}
	bool pop(){
		node* temp = head;
		if(temp==top){
			top = NULL;
			delete temp;
		}
		while(temp->next!=top){
			temp=temp->next;
		}
		top = temp;
		delete temp->next;
		return true;
	}
	int Attop(){
		if(top==NULL) return -99;
		return top->data;
	}
};
	
	int main(){
		Stack s;
		s.push(7);
		s.push(9);
		s.push(90);
		s.pop();
		s.pop();
		cout<<s.Attop();	
		
		
	}
