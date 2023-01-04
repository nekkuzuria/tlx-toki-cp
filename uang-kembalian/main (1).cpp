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

//==========================================================================================


int n, k;
vector<int> koin;
bool computed[50001];
int memo[50001];
bool bisa;


int solve(int x){

    if(x==0){
        bisa = true;
        return 0;
    }
    
    if(computed[x]) return memo[x];
    
    int best = pow(2,30);
    for(int uang : koin){
        if(uang<=x){
            best = min(solve(x-uang)+1, best);
        } 
    }
    computed[x] = true;
    memo[x] = best;
    
    return best;
}



signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    input(n);
    
    int temp;
    forp(0,n,1){
        input(temp);
        koin.pb(temp);
    }
    
    input(k);
    
    bisa = false;
    solve(k);
    
    if(bisa) print(solve(k));
    else print(-1);
    

    return 0;
}


