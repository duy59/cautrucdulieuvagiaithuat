#include<bits/stdc++.h>
using namespace std;
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
		sort(a , a + n ) ;
		bool ok = 0 ; int duy = 0 ;
		for(int i = 1 ; i < n ; i++)
		{
			if(a[i] > a[0] )
			{
				ok = 1 ;
				duy = i ;
				break ;
			}
		}
		if(ok == 1) cout << a[0] << ' ' << a[duy] << endl ;
		else cout << "-1" << endl ; ;
	}
}
