#include<iostream>
using namespace std;

int maximizeTheCuts(int N, int x, int y, int z) {
    if(N == 0){
        return 0;
    }
    if(N < 0) {
        return -1;
    }
    int option1 = 1 + maximizeTheCuts(N - x,x,y,z);
    int option2 = 1 + maximizeTheCuts(N - y,x,y,z);
    int option3 = 1 + maximizeTheCuts(N - z,x,y,z);

    int finalAns = max(option1, option2, option3);
    return finalAns;
}

main() {
    int N,x,y,z;
    maximizeTheCuts(N, x, y, z);
}