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

//==============================================================================================
int temp, n, q;
int par[100001];


int findrep(int x){
    if(par[x] == x) return x;
    else{
        par[x] = findrep(par[x]);
    }
    return par[x];
}

void join(int a, int b){
    int repA = findrep(a);
    int repB = findrep(b);
    par[repA] = repB;
}

bool check(int a, int b){
    return findrep(a) == findrep(b);
}

//==============================================================================================

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a, b;
    
    input(n, q);
    forp(1, n+1, 1) par[i] = i; //initialize
    
    while(q--){
        
        cin >> temp >> a >> b;
        
        if(temp==1) join(a, b);
        else {
            if(check(a, b)) cout << "Y\n"; else cout << "T\n";
        }
       
    }

    return 0;
}




