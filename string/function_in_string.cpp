#include<iostream>
#include<cstring>
using namespace std;


int main(){
    char *s;
    const int leng = 100;
    cout<<"enter a string : ";
    cin.getline(s, leng);
    cout<<strlen(s)<<endl; // strlen() function is used to get length of two string
    

    char s1[20] = "Shubh ";
    char s2[20] = "Gupta";
    strcat(s1, s2); // this funtion strcat() is used to concatenate two strings
    cout << s1 << endl;

    char s4[20];
    strcpy(s4, s2); // tis function is used to copy from string one to other
    strncpy(s4, s2, 3);
    cout<<s4<<endl;





    return 0;
}
