#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0||n==1) {
    return 1;
}
else{
    return n*fact(n-1);
}

}

int main(){
    int n=5;
    int result = fact(n);
    cout << result << endl;
    return 0;
}