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

deque<string> angka;

void pushback(string x){
    angka.push_back(x);
}

void pushfront(string x){
    angka.push_front(x);
}

void popback(){
    angka.pop_back();
}

void popfront(){
    angka.pop_front();
}

//==============================================================================================

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n;
    input(n);
    
    string command, num;
    forp(0, n, 1){
        input(command);
        if(command=="push_back"){
            input(num);
            pushback(num);
        }
        if(command=="push_front"){
            input(num);
            pushfront(num);
        }
        if(command=="pop_front"){
            popfront();
        }
        if(command=="pop_back"){
            popback();
        }
        
    }
    
    for(auto x : angka){
        cout << x << " ";
    }
    

    return 0;
}

