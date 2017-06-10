/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
   Node* item = new Node;
    Node* prev = NULL;
    Node* walk = head;
    item->data = data;
    item->next = NULL;
    if(head == NULL)
        return item;
    if(data <= head->data){
        item->next = head;      
        head = item;       
    }else{
        while(walk != NULL && data > walk->data){  // Finding the insertion Point.
            prev = walk;
            walk = walk->next;
        }
        prev->next = item;
        item->next = walk;
    }
    return head;      
    
        
}
