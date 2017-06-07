#include <iostream>
using namespace std; 

 struct Node
        {
            int data;
            Node* next;
        };
      

class linkedList{
    
    public:
    /*    struct Node
        {
            int data;
            Node* next;
        };
        */
        
      Node* head;   
    
     linkedList(){
        head = NULL;
        } 
    
    
     void append(int data){          
         Node* temp = new Node;
         temp->data = data;
         temp->next = NULL;
         Node* walk = head;
        if(head == NULL){
            head = temp;            
        }else{            
            
            while(walk->next != NULL)
                walk = walk->next;

             walk->next = temp;
        }
         
          
    }

    void print(){
        Node* walk = head;
        while(walk != NULL){
            cout<<walk->data<<" ";
            walk = walk->next;
        }
        cout<<endl;
    }
  
        
};

int main() {
    

linkedList* l = new linkedList();
//input linked list :0->9 7 6 5 2 3 7 5 4
    
//L1 : 0 7 5 3 5
//L2 : 9 6 2 7 4  
l->append(0);
l->append(9);
l->append(7);
l->append(6);
l->append(5);
l->append(2);
l->append(3);
l->append(7);
l->append(5);
l->append(4);

l->print();

linkedList* l1 = new linkedList();
linkedList* l2  = new linkedList();

int count = 1;

Node* walk = l->head;

while(walk != NULL){
    if(count%2 == 1)
        l1->append(walk->data);
    else
        l2->append(walk->data);
    count++;
    walk = walk->next;
} 

cout<<"--------"<<endl;

l1->print();
l2->print();   

   
    return 0;
}






