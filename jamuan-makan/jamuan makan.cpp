#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define debug(x) cout << #x << " = " << x << "\n"; 
#define forp(start, end, step) for(int i=start; i<end; i+=step)
#define form(start, end, step) for(int i=start; i>end; i-=step)
#define all(x) x.begin(), x.end()
using namespace std;

template<typename... T>
void input(T&... args) {
	((cin >> args), ...);
}

template<typename... T>
void print(T&&... args) { 
	((cout << args << " "), ...);
	cout << "\n";
}

//=============================================================================================
vector<pair<int, int>> tamu;
int start, durasi, n;


void solve(){
    int count = 0, timenow=-90;
    for(auto x : tamu){
        debug(x.first); debug(x.second); debug(timenow); debug(count);
        if(x.second>timenow){
            timenow = x.first;
            count ++;
        } 
    }
    print(count);
}

//==============================================================================================

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    input(n);
    while(n--){
        input(start, durasi);
        tamu.pb({start+durasi-1, start});
    }
    sort(all(tamu));
    
    
    solve();

    return 0;
}




