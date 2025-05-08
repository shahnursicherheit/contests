
#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s ;
    cin >> s ;
    int sz = s.size() ; // size of s ;
    int ans = 1 ;
    sort( s.begin(), s.end()) ;
    for ( int i = 0 ; i < sz-1 ; i++ )
    {
        if ( s[i] >= s[i+1] || s[i] < 'A' || s[i] > 'Z' )
        {
            ans = 0 ;
            break ;
        }
    }

    if ( ans == 1 )
    {
        cout <<"YES\n" ;
    }
    else
        cout << "NO\n" ;
}
