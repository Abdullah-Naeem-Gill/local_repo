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
        void fun(node* &head,int d){
        node* temp= new node(d);
        temp->next=head;
        head=temp;
    }
    void display(node* &head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
int main(){
    node* node1=new node(9);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    node* head=node1;
     fun(head,12);
    display(head);
return 0;
}
