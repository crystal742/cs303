//Crystal Ordonez 
//08/28/2019
//Hw 1 question 2 
#include <iostream>
using namespace std;

int main() // main function
{
	int y1;
	int y2;
	int n;
	for (n = 0; n <= 100; n = n + 10) 
	{
		y1 = 100 * n + 10;
		y2 = 5 * n * n + 2;
		if (y1 == y2) 
			cout << "for n="<< n <<" equal" << endl;
		else if (y1 > y2) 
			cout <<"for n=" << n << " y1 is greater" << endl;
		else if (y1 < y2)
			cout << "for n=" << n <<" y1 is smaller" << endl;
	} 
	return 0;
}

