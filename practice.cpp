#include <iostream>
#include <cstring>
using namespace std;

int search(int list[], int key){
    for (int i = 0;i<11; i++){
        if(list[i] == key){
            return i;
        }
    }
    return -1;

}

int main(){
    int list[25] = {1,2,3,4,5,6,7,8,9,0,10};
    int key;
    cout<<"enter an element to search : ";
    cin>>key;
    int index = search(list, key);
    cout<<"element found at : "<<index;
    return 0;
}