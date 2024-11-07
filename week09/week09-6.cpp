// week09-6.cpp SOIT108_Base_013
#include <iostream>
using namespace std;

int main()
{
	int total = 0;
	int now;
	while( cin >> now){
		if(now==0) break;
		if(now>0) total += now;
	}
	cout << total;
}