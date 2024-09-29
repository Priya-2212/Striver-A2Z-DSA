#include <iostream>
using namespace std;

void addMatrix(int A[100][100],int B[100][100], int C[100][100], int i, int j, int rows, int cols) {
    if(i == rows) {
        return;
    } 
    if(j == cols) {
        addMatrix(A, B, C, i+1, 0, rows, cols);
        return;
    }

    C[i][j] = A[i][j] + B[i][j];

    addMatrix(A, B, C, i, j+1, rows, cols);

}
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns";
    cin >> rows >> cols;

    int A[100][100], B[100][100], C[100][100];

    
    cout << "Enter Matrix A:" << endl;

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter Matrix B:" << endl;

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> B[i][j];
        }
    }
    
    addMatrix(A, B, C, 0, 0, rows, cols);

    cout << "Resultant Matrix C:" << endl;

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << C[i][j] << " ";
        }
         cout << endl;
    }
   
    return 0;

}