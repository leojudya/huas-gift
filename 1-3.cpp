#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h> 
using namespace std;


int main(int argc, char** argv) {
	string input;
	cout << "input n: ";
	getline(cin, input);
	int n = atoi(input.c_str());
	srand((unsigned)time(NULL));
	int a = 0;
	int b = 0;
	int m[n][n] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
		{
			int random = 1 + (rand() % 9);
			if (j == i){
				a += random;
			}
			if (j == n - i - 1) {
				b += random;
			}
			m[i][j] = random;
			cout << random << " ";
		}
		cout << "\n";
	}
	
	cout << "���﨤�u�M: " << a << "\n";
	cout << "�Ϲ﨤�u�M: " << b ;
}
