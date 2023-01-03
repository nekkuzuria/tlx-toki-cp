#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int n, m;
vector<int> parsel;


int batas_bawah(int left, int right, int mid){
    while(left<=right){
        mid = (left+right)/2;
        int total = 0;
        
        for(int x : parsel){
            total += mid/x;
        }
        
        if(total<m){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return left;
}

int batas_atas(int left, int right, int mid){
    while(left<=right){
        mid = (left+right)/2;
        int total = 0;
        
        for(int x : parsel){
            total += mid/x;
        }
        
        if(total<m+1){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return left;
}



signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    cin >> n >> m;
    
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        parsel.pb(temp);
    }
    
    int left = 0, right = pow(2, 40), mid = (left+right)/2; 
    cout << abs(batas_atas(left, right, mid) - batas_bawah(left, right, mid)); 

    return 0;
}
