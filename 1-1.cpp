#include <iostream>
#include <math.h> 
using namespace std;

int findMax(double bmi[])
{
	int max_index = 0;
	double max = bmi[0];
	for(int i = 1; i < sizeof(bmi); i++)
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
	int h[] = {175, 162, 80, 170, 184, 155, 120, 100};
	int w[] = {77, 80, 200, 72, 93, 61, 100, 120};
	
	double bmi[sizeof(h)/sizeof(int)];
	cout<< "BMI: " << "\n";
	
	for(int i = 0; i < sizeof(h)/sizeof(int); i++)
	{
		bmi[i] = (double)w[i] / pow((double)(h[i]/ 100.0), 2);
		cout << bmi[i] << "\n";
	}
	
	int fat = findMax(bmi);
	cout << "\n­D±o­n¦º: " << fat;

}


