#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main(int argc, char** argv) {
	srand((unsigned)time(NULL));
	int x[7] = {0};
	for(int i = 0; i < 10000; i++)
	{
		int random = 1 + (rand() % 6);
		x[random]++;
	}
	
	for(int i = 1; i < 7; i++)
	{
		cout << i << ":" << x[i] << "\n";
	}
}
