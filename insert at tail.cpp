#include <iostream>
using namespace std;
  class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
  };
  void fun(node* &head, int d){
    node* n=new node(d);
    node *temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=n;
   
  }
  void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
  }
int main(){
    node* head=NULL;
    fun(head,10);
    fun(head,11);
    fun(head,8);
    display(head);


return 0;
}
