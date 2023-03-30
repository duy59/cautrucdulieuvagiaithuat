#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ; cin >> t ;
	while(t--)
	{
		int n , m ;
	cin >> n >> m ;
	int a[n] , b[m] ;
	priority_queue<int> x ;
	priority_queue<int , vector<int> , greater<int>> y;
	for(int &i : a)
	{
		cin >> i ;
		x.push(i) ;
	}
	for(int &i : b)
	{
		cin >> i ;
		y.push(i) ;
	}

	long long c = x.top() ;
	long long d = y.top() ;
	cout << c * d << endl ;
}
}
