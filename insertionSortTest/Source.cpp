#include <iostream>
using namespace std;

void arr_sort(int arr[], int length){

	int j, temp;

	for (int i = 1; i < length; i++){
		j = i;

		while (j > 0 && arr[j] < arr[j - 1]){
			temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}

		/*for (int p = 0; p < length; p++){
			cout << arr[p] << " ";
		}

		cout << endl;*/

	}

	for (int p = 0; p < length; p++){
		cout << arr[p] << " ";
	}

	cout << endl;
}

int main(){

	cout << "Enter 12 numbers: ";

	int numArray[12];

	for (int i = 0; i < 12; i++){
		cin >> numArray[i];		
	}

	arr_sort(numArray, 12);

	return 0;
}