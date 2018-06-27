#include <iostream>
using namespace std;
void main()
{
	int n;
	cout << "enter value"<<endl;
	cin >> n;
	float *x = new float[n];
	
	for (int i = 0; i < n; i++)
	{
		cout << "Enter value in array:";
		cin >> x[i];
	}
	//cout << x[4]<<endl;
	delete[] x;
	cout << x[1]<<endl;
}