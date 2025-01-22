#include <iostream>
#include <cmath>

using namespace std;

double matrix[10][10], Ai[10][10];

double det(double A[10][10], int n) {
    if (n == 1) return A[0][0];
    if (n==2 )return (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    double sum = 0;
    for (int x = 0; x < n; x++) {
        int a = 0;
        for (int i = 1; i < n; i++) {
            int b = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) continue;
                Ai[a][b] = A[i][j];
                b++;
            }
            a++;
        }
        sum += A[0][x] * pow(-1,x) * det(Ai, n - 1);
    }
    return sum;
}

int main() {
    int n;
    cout << "Please input matrix size: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Input elements of Row " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    double result = det(matrix, n);
    cout << "Determinant of your matrix is " << result << endl;
    
    return 0;
}
