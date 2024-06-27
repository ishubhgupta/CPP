#include<iostream>
#include<math.h>
using namespace std;

void cylinder(int r, int h, int pi = 3.14){
    cout<<"Base Area of Cylinder = "<<pi*pow(r,2)<<endl;

    cout<<"Base Perimeter: "<<2*pi*r<<endl;

    cout<<"Volume of cylinder: "<<pi*h*pow(r,2)<<endl;
}

int main(){
    int r, h;
    cout<<"Enter radius of Cylinder and Height of Cylinder: ";
    cin>>r>>h;
    cylinder(r, h, 3.14);

}