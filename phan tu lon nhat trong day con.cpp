#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ; cin >> t;
	while(t--)
	{
		int n , k ; cin >> n >> k ;
		int a[n] ;
		for(int &x : a)
		{
			cin >> x ;
		}
		for(int i = 0 ; i < n - k + 1 ; i++)
		{
			int Minn = 0 ;
			for(int j = i ; j < i + k ; j++)
			{
				Minn = max(a[j], Minn) ;
			}
			cout << Minn << ' '  ;
		}
		cout << endl ;
	}
 } 
