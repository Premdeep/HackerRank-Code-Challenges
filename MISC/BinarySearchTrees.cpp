#include <iostream>
#include <queue>
#include <climits>

using namespace std;

struct bstNode
{
	int data;
	bstNode* left;
	bstNode* right;
	
};

int max(int a, int b){
	if(a > b)
		return a;
	return b;
}

bstNode* createNode(int data){

	bstNode* node = new bstNode;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void insert(bstNode*& head, int data){

	if(head == NULL){
		head = createNode(data);
	}
	else{
		if(data > head->data){
			insert(head->right, data);

		}else{
			insert(head->left, data);
		}
	}

}

bool search(bstNode* head, int data){

	if(head == NULL)
		return false;
	if(head->data == data)
		return true;
	if(data > head->data)
		return search(head->right, data);
	else
		return search(head->left, data);

}

int height(bstNode* head){

	if(head == NULL)
		return -1;
	return max(height(head->left), height(head->right)) + 1;
}

int min(bstNode* head){
	if(head == NULL){
		cout<<"empty tree"<<endl;
		return -1;
	}
	while(head->left != NULL)
		head = head->left;
	return head->data;
}

int minRec(bstNode* head){
	if(head == NULL){
		cout<<"empty tree"<<endl;
		return -1;
	}
	if(head->left == NULL)
		return head->data;
	return minRec(head->left);
}

int max(bstNode* head){
	if(head == NULL)
		return -1;
	if(head->right == NULL)
		return head->data;
	return max(head->right);
}

void preOrder(bstNode* root){
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(bstNode* root){
	if(root == NULL)
		return;
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

void inOrder(bstNode* root){
	if(root == NULL)
		return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

void levelOrder(bstNode* root){
	queue<bstNode*> nq;
	if(root == NULL)
		return;
	nq.push(root);
	while(!nq.empty()){

		bstNode* temp = nq.front();
		if(temp->left != NULL)
			nq.push(temp->left);
		if(temp->right != NULL)
			nq.push(temp->right);

		cout<<temp->data<<" ";
		nq.pop();
	}

}

bool isLST(bstNode* head, int data){

	if(head == NULL)
		return true;
	if(head->data <= data &&
		isLST(head->left, data)&&
		isLST(head->right, data))
		return true;
	else
		return false;

}

bool isRST(bstNode* head, int data){

	if(head == NULL)
		return true;
	if(head->data > data &&
		isRST(head->left, data)&&
		isRST(head->right, data))
		return true;
	else
		return false;
}

bool isBSTree(bstNode* head){

	if(head == NULL)
		return true;
	if(isLST(head->left, head->data)&&
		isRST(head->right, head->data)&&
		isBSTree(head->left)&&
		isBSTree(head->right))
		return true;
	else
		return false;


}


bool BSTCheck(bstNode* head, int min, int max){
	if(head == NULL)
		return true;
	if(head->data >= min
		&& head->data < max
		&& BSTCheck(head->left, min, head->data)
		&& BSTCheck(head->right, head->data, max))
		return true;
	else
		return false;
}

bool isBST(bstNode* head){
	return BSTCheck(head, INT_MIN, INT_MAX);

}

bstNode* findMin(bstNode* root){
	if(root == NULL)
		return root;
	if(root->left == NULL)
		return root;
	else	
	 	return findMin(root->left);
}

bstNode* findMax(bstNode* root){
	if(root == NULL)
		return root;
	while(root->right != NULL)
		root = root->right;
	return root;
}

void deleteNode(bstNode*& head, int data){

	if(head == NULL)
		return;
	if(head->data < data)
		return deleteNode(head->right, data);
	else if(head->data > data)
		return deleteNode(head->left, data);
	else{
		// we found it
		if(head->left == NULL && head->right == NULL){
			delete head;
			head = NULL;
		}else if(head->left == NULL){
			bstNode* temp = head;
			head = head->right;
			delete temp;
			temp = NULL;
		}else if(head->right == NULL){
			bstNode* temp = head;
			head = head->left;
			delete temp;
			temp = NULL;
		}else{
			bstNode* temp = findMin(head->right);
			head->data = temp->data;
			deleteNode(head->right, temp->data);
		}
	}
}



int main(){

	bstNode* root;
	root = NULL;
	insert(root, 10);
	insert(root, 20);
	insert(root, 9);
	insert(root, 15);
	insert(root, 5);
	insert(root, 7);
	insert(root, 1);
	insert(root, 25);

	cout<<"enter data to search : ";
	int data;
	cin>>data;

	if(search(root, data))
		cout<<"Found"<<endl;
	else
		cout<<"Not Found"<<endl;

	cout<<"min value : "<<min(root)<<endl;
	cout<<"min value : "<<minRec(root)<<endl;
	deleteNode(root, 20);
	cout<<"max value : "<<max(root)<<endl;
	cout<<"Height of tree : "<<height(root)<<endl;
	cout<<"pre Order traversal : ";
	preOrder(root);
	cout<<endl;
	cout<<"post Order traversal : ";
	postOrder(root);
	cout<<endl;
	cout<<"in Order traversal : ";
	inOrder(root);
	cout<<endl;
	cout<<"level Order traversal : ";
	levelOrder(root);
	cout<<endl;
	if(isBSTree(root))
	 cout<<"Is a Binary search tree"<<endl;
	else
		cout<<"Not a BST"<<endl;
	if(isBST(root))
	 cout<<"Is a Binary search tree"<<endl;
	else
		cout<<"Not a BST"<<endl;




	return 0;
}