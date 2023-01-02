#include <iostream>
using namespace std;

int n;
int mat1[75][75];
int mat2[75][75];
bool identik=true, vertikal=true, horizontal=true, digkabaw=true, digkibaw=true; 

void check(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat1[i][j] != mat2[i][j]) identik = false;
            if(mat1[i][j] != mat2[i][n-1-j]) vertikal =  false;
            if(mat1[i][j] != mat2[n-1-i][j]) horizontal =  false;
            if(mat1[i][j] != mat2[j][i]) digkabaw = false;
            if(mat1[i][j] != mat2[n-1-j][n-1-i]) digkibaw = false;
        }
    } 
}



int main()
{
    cin >> n >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >>  mat1[i][j];
        }
    }
    
    
    cin >> n >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >>  mat2[i][j];
        }
    }
    
    check();
    if(identik) cout << "identik";
    else if(vertikal) cout << "vertikal";
    else if(horizontal) cout << "horisontal";
    else if(digkabaw) cout << "diagonal kanan bawah";
    else if(digkibaw) cout << "diagonal kiri bawah";
    else cout << "tidak identik";
    

    return 0;
}
