#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<pair<int,int>> q;
    q.push({1,-2});
    q.push({3,-4});
    q.push({7,-1});
    q.push({2,-5});
    q.push({5,-1});

    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.top().first<<" "<<q.top().second*-1<<endl;;
        q.pop();
    }

return 0;
}







