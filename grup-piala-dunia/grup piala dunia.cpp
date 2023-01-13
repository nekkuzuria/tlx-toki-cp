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
int t, n, skor[10], matchskor[10];
bool oke, ada;

void solve(int a, int b){
    
    if(a==n-1){
        oke = true;
        for(int i=0; i<n; i++){
            if(matchskor[i] != skor[i]){
                oke = false;
                break;
            }
        } if(oke) ada = true; 
    }
    
    
    else{
    	//menang
    	matchskor[a] += 3;
    	b < n-1 ? solve(a, b+1) : solve(a+1, a+2);
    	matchskor[a] -= 3;
    
    
    	//seri
    	matchskor[a] += 1;
    	matchskor[b] += 1;
    	b < n-1 ? solve(a, b+1) : solve(a+1, a+2);
    	matchskor[a] -= 1;
    	matchskor[b] -= 1;
    
    	//kalah
    	matchskor[b] += 3;
    	b < n-1 ? solve(a, b+1) : solve(a+1, a+2);
    	matchskor[b] -= 3;
    }
    
    
}

//==============================================================================================

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    input(t);
    
    while(t--){
        ada = false;
        
        input(n);
        forp(0, n, 1){
            input(skor[i]);
        }
        
        fill(matchskor, matchskor+7, 0);
        
        solve(0, 1);
        
        
        ada ? print("YES") : print("NO");
    }
    

    return 0;
}




// segmentation failed, td naruh update nilai a b di awal function
