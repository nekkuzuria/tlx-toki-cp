#include <iostream>
using namespace std;

long long a, b, c, d;
long long penyebut, pembilang, faktor;

long long fpb(long long a, long long b){
    if(b==0) return a;
    return fpb(b, a%b);
}


int main()
{
    cin >> a >> b;
    cin >> c >> d;
    
    penyebut = b*d;
    pembilang = (a*d) + (b*c);
    faktor = fpb(penyebut, pembilang);
    cout << pembilang/faktor << " " << penyebut/faktor << endl;
    

    return 0;
}
