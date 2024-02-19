#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	int d;
	for(y = 2; y <=100; y++){
		x = 1;
		for (d = 2; d * d <= y; d++){
			if (y % d == 0){
				x = 0;
				break;
			}
		}
	if (x == 1){
		cout << "[: " << y << " jest liczba pierwsza :]" << endl;
	}
	}
	return 0;
}





























