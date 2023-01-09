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
int baris, kolom, k, petak[102][102];

//==============================================================================================

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    fill(&petak[0][0], &petak[102][0], 1);
    
    input(baris, kolom, k);
     
    for(int i=1; i<=baris; i++){
        for(int j=1; j<=kolom; j++){
            input(petak[i][j]);
        }
    }
    
    bool bisa;
    for(int j=1; j<=kolom; j++){
        bisa = false;
        for(int i=1; i<=baris; i++){
            if(petak[i][j-1] * petak[i][j+1] * petak[i-1][j] * petak[i+1][j] == k){
                print(i, j);
                bisa = true;
                break;
            }
        }
        if(bisa) break;
    }
    
    if(!bisa) print(0, 0);

    return 0;
}



