// week16-7a.cpp UVA299
#include <iostream>
#include <vector> // Step03: vector
using namespace std;

int main()
{
	int T, N;
	cin >> T; // Step01: Input
	for(int t=0; t<T; t++){
		cin >> N; // Step01: Input
		vector<int> a(N); // Step03: vector
		for(int i=0; i<N; i++){
			cin >> a[i];
		}
		int ans = 0;









		cout << "Optimal train swapping takes " << ans << " swaps.\n";
	} // Step02: Output
}
