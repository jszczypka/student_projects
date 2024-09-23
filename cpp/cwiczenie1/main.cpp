#include <iostream>

using namespace std;

int main(){
	int tab[4] = {6,9,1,2};
	int n = 4;

	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - 1; j++){ 
			if (tab[j] > tab[j+1]){
				int zmienna = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] =zmienna;
			}
		}
	}
	for (int i = 0; i < n; i++){
	cout << tab[i] << " ";
	}
	return 0;
}
