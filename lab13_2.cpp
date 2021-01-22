#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool show[][N]){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cout << show[i][j] << " ";
            }
        cout << "\n";
    }
}

void inputMatrix(double input[][N]){
    for(int i = 0 ; i < N ; i++){
        cout << "Row " << i + 1 << ": ";
        for(int j = 0 ; j < N ; j++){
            cin >> input[i][j];
        }
    }
}

void findLocalMax(const double in[][N], bool out[][N]){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            out[i][j] = 0;
        }
    }
    for(int i = 1 ; i < N - 1 ; i++){
        for(int j = 1 ; j < N - 1 ; j++){
            if(in[i][j] >= in[i][j - 1] and in[i][j] >= in[i][j + 1] and in[i][j] >= in[i + 1][j] and in[i][j] >= in[i - 1][j]){
                out[i][j] = 1;
            }
            else{
                out[i][j] = 0;
            }
        }
    }
}