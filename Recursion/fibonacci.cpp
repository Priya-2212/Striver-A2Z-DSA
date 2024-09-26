#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main(){
    int n =8;
    int result=Fibonacci(n);
    cout << result << endl;
    return 0;
}