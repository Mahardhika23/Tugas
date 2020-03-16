#include <iostream>
using namespace std;

	int a[] = {16,2,77,40,12071};
int n, result = 0;

int main()
{
	for (n = 0; n < 5; n++) {
		result += a[n];
	}
	cout << result;
	return 0;
}
