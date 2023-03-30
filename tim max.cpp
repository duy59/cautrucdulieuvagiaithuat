#include<bits/stdc++.h>
using namespace std;
int tmp = 1e9+7 ;
int main()
{
	int t ; cin >> t ;
	while(t--)
	{
		int n ; cin >> n ;
		int a[n] ;
		for(int &x : a)
		{
			cin >> x ;
		}
		sort(a , a + n) ;
		long long tong = 0 ;
		for(int i = 0 ; i < n ; i++)
		{
			tong += a[i] * i ;
			tong = tong % tmp ;
		}
		cout << tong << endl ;
	}
}
