#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ; cin >> t ;
	while(t--)
	{
		int n , k ;
		cin >> n >> k ;
		long long a[n] ;
		for(long long &x : a)
		{
			cin >> x ;
		}
		sort(a, a + n) ;
		bool ok = false ;
		int f = 0 ;
		for(int i = 0 ; i < n ; i++)
		{
			if(k >= a[i])
			{
				f = i ;
				ok = 1 ;
			}
		}
		if(ok == 0)
		{
			cout << "-1" << endl ;
		}
		else cout << f+1 << endl ;
	}
}
