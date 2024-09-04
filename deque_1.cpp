#include<bits/stdc++.h>
using namespace std;
int main(){

    deque<int> dq;

    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_front(5);

    cout<<dq.front()<<" "<<dq.back()<<endl;

return 0;
}

