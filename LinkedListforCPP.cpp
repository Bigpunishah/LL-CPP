#include <iostream>
 
using namespace std;
 
//Declare node 
struct Node{
    int num;
    Node *next;
};
 
//Starting (Head) node
struct Node *head=NULL;
 
//Insert node at start
void insert_Node(int n){
    struct Node *new_node=new Node;
    new_node->num=n;
    new_node->next=head;
    head=new_node;
}

void push_back(int newElement) {
  Node* new_Node = new Node();
  new_Node->num = newElement;
  new_Node->next = NULL; 
  if(head == NULL) {
    head = new_Node;
  } 
  else 
  {    
    Node* temp = head;
    while(temp->next != NULL)
      temp = temp->next;
  temp->next = new_Node;
  }    
}

//Display all nodes
void display_all_nodes()
  {
	struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    }
 
int main(){
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    insert_Node(13);
    cout<<"Original Linked list:\n";
	display_all_nodes();
	cout<<"\n\nInsert a new node at the end of a Singly Linked List:\n";
    push_back(0);
    display_all_nodes();
    cout<<endl;
    return 0;
}