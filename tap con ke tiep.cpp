#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ; cin >> t ;
	while(t--)
	{
		int n , k ;
		cin >> n >> k ;
		int a[k] ;
		for(int i =0 ; i < k ; i++)
		{
			cin >> a[i] ;
		}
		int i = k ;
		while(i >= 1 && a[i - 1] == n - k + i )
		{
			--i ;
		}
		if(i == 0)
		{
			for(int m = 0 ; m < k ; m++)
			{
				cout << m + 1 << ' ' ;
			}
			cout << endl ;
		}
		else
		{
			a[i-1] = a[i-1] + 1 ;
			for(int m = i ; m < k  ; m++ )
			{
				a[m] = a[m-1] + 1; 
			}
			for(int m = 0 ; m <  k ; m++ )
			{
				cout << a[m] << ' ' ;
			} 
			cout << endl ;
		}
	}
 } 
