#include <iostream>

using namespace std;

int main(){
	char t[2][2] = {0};
	int w;
	int x, y; //współrzedne statka
	int g, h; //miejsce bombardowania
	cout << "ile chesz podać statków: ";
	cin >> w;
	for(int i=0;i<w;i++){
		cout << "gracz 1 podaje współrzędne statku: ";
		cin >> x >> y;
		t[x][y] = 'X';

		cout << "TERAZ DRUGI GRACZ" << endl;
		cout << "gracz 2 podaje współrzędne pola na którą spadnie bomba: ";
		cin >> g >> h;

		if(t[g][h] == 'X'){
			cout <<"Zatopiony!!" << endl;
		} else {
			cout <<"Pudło!!" << endl;
		}
	}

return 0;
}
