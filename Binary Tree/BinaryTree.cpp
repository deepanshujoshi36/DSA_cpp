#include<iostream>
#include<queue>
using namespace std;

class Node{
	public:
		int data ;
		Node* left;
		Node* right;
		Node(int d){
			this-> data = d;
			this-> left = NULL;
			this-> right = NULL;
		}
};

Node* BinaryTree(Node* root){
	cout<< "Enter the data" << endl;
	int data ;
	cin >> data;
	root = new Node(data);
	if(data == -1){
		return NULL;
	}
	cout<< "Enter the left element of "<< data << endl;
	root->left = BinaryTree(root->left);

	cout<< "Enter the right element of "<< data << endl;
	root->right = BinaryTree(root->right);

	return root;
}

void levelOrderTraversal(Node* root){
	queue<Node*> q;
	q.push(root);

	while(!q.empty()){
		Node* temp = q.front();
		cout<< temp->data<<" ";
		q.pop();
		
		if(temp->left){
			q.push(temp->left);
		}

		if(temp->right){
			q.push(temp->right);
		}
		
	}
}

int main(){
	Node* root = NULL;
	
	//creating a tree
	root = BinaryTree(root);

	//level order traversal
	levelOrderTraversal(root);

	return 0;
}
