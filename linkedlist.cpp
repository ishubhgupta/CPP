#include<bits/stdc++.h>
using namespace std;

struct LinkedList{
    public:
        int data;
        LinkedList* next;

        LinkedList(){
            next = NULL;
        }
        LinkedList(int val){
            data = val;
            next = nullptr;
        }
};
int main(){
    LinkedList* head = new LinkedList();
    LinkedList* tail = head;
    // cout<<head->data<<endl;

    // if(head->next==nullptr) cout<<"true";
    int n;
    cin>>n;
    
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin>>vec[i];
    }

    for(int i = 0; i<n; i++){
        LinkedList* newnode = new LinkedList(vec[i]);
        tail->next = newnode;
        tail = newnode;
    }
    head = head->next;
    LinkedList* curr = head;
    while(curr){
        cout<<curr->data;
        curr = curr->next;

    }
    


}

