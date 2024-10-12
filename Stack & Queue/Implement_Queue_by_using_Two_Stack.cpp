#include <bits/stdc++.h>
using namespace std;

class Queue{

    stack<int> s1, s2;

public:

    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop(){
        s1.pop();
    }

    int front(){
        return s1.top();
    }


};

int main() {

    Queue q;

    q.push(10);
    q.push(230);
    q.push(30);
    q.push(56);

    cout<<q.front()<<endl;

    q.pop();
    cout<<q.front()<<endl;


    return 0;
}
