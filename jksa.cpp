#include <iostream>
using namespace std;
  
  int fun2(int arr[],int size,int key,int capacity,int index){
    for(int i=size-1;i>=index;i--){
      arr[i+1]=arr[i];
    }
    arr[index]=key;
    return 1;

  }
  void display(int arr[],int size,int index,int capacity){
    for (int i=0;i<10;i++){

      cout<<arr[i]<<" ";
    }

  }
int main(){
  int arr[10]={}; 
  int key,size,index,capacity=10;
   
    cout<<"enter the size of the array : ";
    cin>>size;
    
    cout<<"enter the values in array : "<<endl;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
     cout<<"enter the key you want to insert : ";
    cin>>key;
    cout<<"on which index you want to put your number ? ";
    cin>>index;
  cout<<fun(arr,key,size)<<endl;
  fun2(arr,size,key,capacity, index);
  size+=1;
  display(arr,size,index,capacity);
          
return 0;
}
