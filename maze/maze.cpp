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

int n, m, grid[101][101], inp_y, inp_x;
deque<pair<int, int>> antrian;


bool inside(int y, int x){
    return y>0 and y<=n and x>0 and x<=m;
}


int bfs(int y, int x){
    
    antrian.pb({y,x});
    
    for(int step=0; !antrian.empty(); step++){
        
        int t = antrian.size();
        while(t--){
            y = antrian.front().first;
            x = antrian.front().second;
            antrian.pop_front();
            
            if(!inside(y, x)) return step;
            if(grid[y][x]==-1) continue;
            
            grid[y][x] = -1;
            antrian.pb({y+1, x});
            antrian.pb({y-1, x});
            antrian.pb({y, x+1});
            antrian.pb({y, x-1});
        }
    }
    
    return 0;
}

//==============================================================================================

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    input(n, m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            input(grid[i][j]);
        }
    }
    input(inp_y, inp_x);
    
    cout << bfs(inp_y, inp_x);
    
    
    return 0;
}

