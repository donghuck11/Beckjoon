#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int num[5];
	int sum = 0;
	int mid;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
	}

	sort(num, num + 5);
	mid = num[2];

	cout << sum / 5 << "\n";
	cout << mid << "\n";


}