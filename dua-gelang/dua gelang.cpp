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
int x1, y_1, r1, x2, y2, r2;

void solve(){
    
    int jp = sqrt(pow((y_1-y2), 2) + pow((x1-x2), 2));
    
    if(jp < abs(r1-r2)) print("tidak bersentuhan");
    else if(jp <= r1+r2) print("bersentuhan");
    else print("tidak bersentuhan");

}

//==============================================================================================

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    input(x1, y_1, r1);
    input(x2, y2, r2);
    
    solve();
    

    return 0;
}


