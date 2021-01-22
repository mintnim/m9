#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for(int j = 0 ; j < N - 1 ; j++){	
		cout << "Pass " << N - 9 + j << ":";
		T temp = d[j + 1];
		for(int k = j ; k >= 0 ; k--){
			if(temp > d[k]){
        		d[k + 1] = d[k];
        		d[k] = temp;
    		}
    		else{
    			break;
			}
   	 	}
  		for(int j = 0; j < 10; j++) cout << d[j] << " ";
  			cout << endl;
  }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

