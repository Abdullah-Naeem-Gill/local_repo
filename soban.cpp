#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
class list{
	private:
		node *head;
	public:
		list(){
			head=NULL;
		}

		void insert_end(int x){
			node* newnode;
			newnode=new node();
			
			newnode->data=x;
			newnode->next=NULL;
			
			if( head==NULL){
				head=newnode;
			}
			else{
				node *temp;
				temp=head;
				
				while(temp->next!=NULL){
					temp=temp->next;
				}
				temp->next=newnode;
			}
		}
		void new_start(int x){
			node* new_node;
			new_node=new node();
			new_node->data=x;
			new_node->next=head;
			head=new_node;
		}
		
		void spacific_position(int pos, int x){
			node* new_element;
			new_element=new node();
			
			new_element->data=x;
			new_element->next=NULL;
			
			if(pos<1){
				cout<<"\nposition should be >=1.";
			}
			else if(pos==1){
				new_element->next=head;
				head=new_element;
			}
			else{
				node* temp;
				temp=head;
				for(int i=1; i<pos-1; i++){
					if(temp!=NULL){
						temp=temp->next;
					}
				}
				if(temp!=NULL){
					new_element->next=temp->next;
					temp->next=new_element;
				}
				else{
					cout<<"\nThe previous node is null";
				}
			}
		}
		
		void Delete(){
			//node* temp;
			if(head!=NULL){
				node* temp;
				temp=head;
				
				head=head->next;
				delete(temp);
			}
		}
		void Delete_end(){
				node* temp=head;
				node* prev=head;
				
			while(temp->next!=NULL){
				prev=temp;
				temp=temp->next;
			}
			prev->next=NULL;
			delete(temp);
		}
		
		void print_list(){
			node* temp;
			temp=head;
			if(temp!=NULL){
			//	cout<<"The list contains : ";
				while(temp!=NULL){
					cout<<temp->data<<"\t";
					temp=temp->next;
				}
				cout<<endl;
			}
			else{
				cout<<"The list is empty.";
			}
		}
};

int main(){
	list nodee;
	
	int x,n,pos;
	int yn;
	
	cout<<"Enter the size of linked list : ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cout<<"Enter value : ";
		cin>>x;
		nodee.insert_end(x);
	}
	cout<<"The entred List is : \n\t\t";
	nodee.print_list();
	cout<<endl;
	
	start:
		
	cout<<"ADD elment at \n1) Start\n2) End\n3) Spacific Position\n4) Print list\n5)delete ";
	cin>>yn;
	
	if(yn==1){
		cout<<"Enter the starting value to insert : ";
		cin>>x;
		nodee.new_start(x);
	}
	else if(yn==2){
		cout<<"Enter the ending value to insert : ";
		cin>>x;
		nodee.insert_end(x);
	}
	else if(yn==3){
		cout<<"Enter the value to insert : ";
		cin>>x;
		cout<<"Enter the position : ";
		cin>>pos;
		nodee.spacific_position(pos,x);
	}

	else if(yn==4){
		nodee.print_list();
	}
	else if(yn==5){
		int x;
		cout<<"start or END";
		cin>>x;
		if(x==1){
			nodee.Delete();	
		}
		else if(x==2){
			nodee.Delete_end();
		}
		
	}
	else {
		cout<<"wrong entry";
	}
	
	char yy;
	cout<<"\n\tDo you want any other operation : ";
	cin>>yy;
	if(yy=='y'){
		goto start;
	}
	else{
		return 0;
	}
	


	return 0;
}

