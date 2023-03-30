#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ; cin >> t ;
	while(t--)
	{
		int n ; cin >>  n ;
		int a[n] ;
		for(int &x : a)
		{
			cin >> x ;
		}
		sort(a, a+n) ;
		int j = 0 ; 
		for(int i = n - 1 ; i >=  n / 2 ; i--)
		{
			{
				if(j < n / 2)
				{
					cout << a[i] << ' ' << a[j] << ' '  ;
					j++ ;
				}
			}
		}
		if(n % 2 == 1)
		{
			cout << a[n/2] << endl ;
		}
		else 
		{
			cout << endl ;
		}
	}
 } 
