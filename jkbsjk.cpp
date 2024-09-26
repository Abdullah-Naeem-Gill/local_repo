#include <iostream>
using namespace std;
  int fun(int arr[],int value,int size){
    int count=0;
    for (int i=0;i<size;i++){
        if(arr[i]=value){
            count++;

        }
    }
    return count;

  }
int main(){
    int arr[10]={30,67,30,20,60,30};
    int value=30,size=6;
    cout<<fun(arr,value,size);
    
return 0;
}
