#include <iostream>
using namespace std;

class Temperature {
public:
    float far2cel(int far) {
        return (far - 32) * 5.0 / 9.0;
    }
};

int main() {
    Temperature t1;

    int temp;
    cout << "Enter temperature in F: ";
    cin >> temp;
    cout<<temp<<" F in C is: "<<t1.far2cel(temp);

    return 0;
}