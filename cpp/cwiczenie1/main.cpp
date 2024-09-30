#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> baka;

	int m;
	while (true){
		cout << "Podaj liczbę lub naciśnij cyfre 0 by sortować. Twoja kolej: ";
		cin >> m;
		if (m == 0){
			break;
		}else{
			baka.push_back(m);
		}
	}

	for (int i = 0; i < baka.size() - 1; i++){
		for (int j = 0; j < baka.size() - 1; j++){ 
			if (baka[j] > baka[j+1]){
				int zmienna = baka[j];
				baka[j] = baka[j+1];
				baka[j+1] = zmienna;
			}
		}
	}
	for (int i = 0; i < baka.size(); i++){
	cout << baka[i] << " ";
	}
	return 0;
}
