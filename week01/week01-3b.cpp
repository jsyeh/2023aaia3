// week01-3.cpp SOIT106_BASE_002
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	cout << n << "=50*" << n / 50 << "+5*" << n%50 / 5 << "+1*" << n%5 << "\n";
}