#include <bits/stdc++.h>
using namespace std;

class Stack{

    queue<int>q1, q2;

public:
    void push(int x){
        q2.push(x);

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop(){
        if(q1.empty()){
            return;
        }
        q1.pop();
    }

    int top(){
        if(q1.empty()){
            return -1;
        }
        return q1.front();
    }


};

int main() {

    Stack st;

    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);

    st.pop();
    st.pop();


    cout<<st.top()<<endl;


    return 0;
}
