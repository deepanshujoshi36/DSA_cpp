#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int data){
			this-> data = data;
			next = NULL;
		}
};

class Queue{
	node *front , *rear;
	public:
		Queue(){
			front = rear = NULL;
		}

		//to insert an element
		void push(int element){
			node *n = new node(element);
			
			if(front == NULL){
				front = rear = n;
				return ;
			}
			rear->next = n;
			rear = n;
			
		}

		//to remove the element from the Queue
		void pop(){
			if(front == NULL){
				cout<<"Underflow "<<endl;
				return ;
			}
			node *temp = front;
			if(front == rear){
				front = rear = NULL;
				delete temp;
				return ;
			}
			front = front->next;
			delete temp;
		}

		//to display the Queue
		void display(){
			node *temp = front;
			cout<<"front - ";
			while(temp != NULL){
				cout <<temp->data<<"->";
				temp = temp->next;	
			}
			cout<<" - rear"<<endl;

		}
};

int main(){
	Queue q;
	q.push(10);
	q.display();
	q.pop();
	q.display();
	return 0;
}
