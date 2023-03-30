#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ; cin >> t;
	while(t--)
	{
		int n ,k ;
		cin >> n >> k ;
		int a[n] ;
		for(int &x : a)
		{
			cin >> x ;
		}
		sort(a , a + n ) ;
		int dem = 0 ;
		for(int i = 0 ; i < n ; i++)
		{
			if(a[i] == k)
			++dem ;
		}
		if(dem != 0)
		{
			cout << dem << endl ;
		}
		else cout << "-1" << endl ;
	}
}
