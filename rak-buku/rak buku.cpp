#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;


int n, b;
vector<int> bebek;

bool higher(int a, int b){
    return a>b;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> b;
    
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        bebek.pb(temp);
    }
    
    sort(bebek.begin(), bebek.end(), higher);
    
    int jumlah=0, total=0;
    for(int x : bebek){
        jumlah++;
        total += x;
        if(total>=b){
            cout << jumlah;
            break;
        }
    }
    return 0;
}