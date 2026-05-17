#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node(int value){
		data = value;
		next = NULL;
	}	
};

class LinkedList{
	node *head;
	public:
		LinkedList(){
			head = NULL;
		}

		//insert at head
		void insertAtHead(int value){
			node *n = new node(value);
			n->next = head;
			head = n ;
		}

		//insert at tail 
		void insertAtTail(int value){
			node *n = new node(value);
			if(head == NULL){
				head = n;
			}
			else{
				node *temp = head;
				while(temp->next != NULL){
					temp = temp->next;
				}
				temp->next = n;
			}
				
		}

		//to search element 
		bool search(int key){
			node *temp = head;
			while(temp != NULL){
				if(temp->data == key){
					return true;
				}
				temp = temp->next;
			}
			return false;
		}

		//to display the linkedlist
		void display(){
			node *temp = head;
			while(temp != NULL){
				cout<<temp->data<<"->";
				temp = temp->next;
			}
			cout<<"NULL"<<endl;
		}

};

int main(){
	LinkedList list;
	list.insertAtHead(4);
	list.insertAtTail(5);
	list.insertAtHead(6);
	list.display();
	cout<<list.search(7)<<endl;
	return 0;
}
