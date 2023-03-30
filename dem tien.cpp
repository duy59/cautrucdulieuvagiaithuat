#include<bits/stdc++.h>
using namespace std;
int trave(int n)
{
	int b[10] = {1000 , 500 , 200 , 100 ,50 , 20 , 10 ,5 ,2 , 1} ;
	int cnt = 0 ;
	for(int i =0 ; i < 10 ; i++)
	{
		cnt += n / b[i] ;
		n = n % b[i] ;
	}
	return cnt ;
}
int main()
{
	
	int t ; cin >> t ;
		while(t--)
		{
			int n ; cin >> n ;
			cout << trave(n) << endl ;
		}
	}
 
