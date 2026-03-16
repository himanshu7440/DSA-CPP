#include <iostream>
using namespace std;

int main() {

    int arr[5] = {2,5,7,9,11};
    int key = 7;

    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"Element found";
        }
    }

}