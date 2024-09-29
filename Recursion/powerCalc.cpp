#include<iostream>
using namespace std;

int power(int base, int x) {
    if(x==0) {
        return 1;
    }
    return (base * power(base, x-1));
}
int main() {
    int base = 2, x = 5;
    cout << "Required Power is " << power(base, x);
}