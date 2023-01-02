#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int t;
string target;
bool menang;

struct Data{
    string id;
    int sesi1, sesi2, sesi3;
}; // Data berisi id dan skor tiap sesi


bool compare(Data peserta1, Data peserta2){
    if(peserta1.sesi3 != peserta2.sesi3) return peserta1.sesi3 > peserta2.sesi3;
    if(peserta1.sesi2 != peserta2.sesi2) return peserta1.sesi2 > peserta2.sesi2;
    return peserta1.sesi1 > peserta2.sesi1;
} // fungsi utk compare skor tiap sesi


int main()
{
    
    cin >> t; // banyak seleksi
    
    for(int i=0; i<t; i++){
        menang = false;
        
        cin >> n >> m; // n = banyak peserta, m = banyak pemenang
        cin >> target; // id yg mau dicek kemenangannya
        
        Data peserta[n];
        
        for(int j=0; j<n; j++){ // input data tiap peserta
            cin >> peserta[j].id >> peserta[j].sesi1 >> peserta[j].sesi2 >> peserta[j].sesi3;
        }
        
        sort(peserta, peserta + n, compare); // sorting
        
        // cek apakah id target menang
        for(int x=0; x<m; x++){
            if(peserta[x].id==target){
                cout << "YA" << endl;
                menang = true;
                break;
            }
        } 
        if(n!=0 and !menang) cout << "TIDAK" << endl;
        
    }

    return 0;
}

