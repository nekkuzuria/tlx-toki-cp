#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, x, temp;
int minimal, res;
vector<int> kupon;

int main()
{
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> temp;
        kupon.push_back(temp);
    }
    
    sort(kupon.begin(), kupon.end());
    minimal = abs(x-kupon[0]);
    res = kupon[0];
    for(int i=1; i<kupon.size(); i++){
        if(abs(x-kupon[i]) < minimal){
            res = kupon[i];
            minimal = abs(x-kupon[i]);
        } else break;
    }
    
    cout << res;

    return 0;
}