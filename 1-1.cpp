#include <iostream>
#include <math.h> 
using namespace std;

int findMax(double bmi[], int length)
{
	int max_index = 0;
	double max = bmi[0];
	for(int i = 1; i < length; i++)
	{
		if (bmi[i] > max) {
			max = bmi[i];
			max_index = i;
		}
	}
	return max_index + 1;
}

int main()
{
	int h[] = {175, 162, 80, 20, 184, 155, 120, 100};
	int w[] = {77, 80, 200, 200, 93, 61, 100, 120};
	int length = sizeof(h)/sizeof(int);
	
	double bmi[length];
	cout<< "BMI: " << "\n";
	
	for(int i = 0; i < length; i++)
	{
		bmi[i] = (double)w[i] / pow((double)(h[i]/ 100.0), 2);
		cout << bmi[i] << "\n";
	}
	
	int fat = findMax(bmi, length);
	cout << "\n³Ì­Dªº¤jÎx: " << fat;
}


