#include<iostream>
using namespace std;
int countocc(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
       
    }
     return count;
}
int main(){
    int arr[6]={1,2,3,2,5,2};
    int n = 6;
    int key = 2;
    int result= countocc(arr,n,key);
    cout<<"count "<<result;
    return 0;
}

    