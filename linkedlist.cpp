#include<bits/stdc++.h>
using namespace std;

struct LinkedList{
    public:
        int data;
        LinkedList* next;

        LinkedList(){
            data = next = NULL;
        }
        LinkedList(int val){
            data = val;
            next = nullptr;
        }
};
int main(){
    LinkedList* head = new LinkedList();
    // cout<<head->data<<endl;

    // if(head->next==nullptr) cout<<"true";
    int n;
    cin>>n;
    
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin>>vec[i];
    }




}

