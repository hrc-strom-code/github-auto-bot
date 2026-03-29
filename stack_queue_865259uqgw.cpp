// Auto-generated: 2026-05-11 11:57:45
// Topic: Stack and Circular Queue
#include <iostream>
#include <vector>
#include <stdexcept>

namespace ds_865259uqgw {
    template<typename T> class Stack {
        std::vector<T> data;
    public:
        void push(T v){data.push_back(v);}
        T pop(){if(data.empty()) throw std::underflow_error("empty"); T t=data.back(); data.pop_back(); return t;}
        T peek()const{return data.back();}
        bool empty()const{return data.empty();}
        int size()const{return (int)data.size();}
    };
    template<typename T> class CQueue {
        std::vector<T> buf; int h=0,t=0,cnt=0,cap;
    public:
        explicit CQueue(int c):buf(c),cap(c){}
        void enqueue(T v){if(cnt==cap)throw std::overflow_error("full"); buf[t]=v;t=(t+1)%cap;++cnt;}
        T dequeue(){if(!cnt)throw std::underflow_error("empty"); T v=buf[h];h=(h+1)%cap;--cnt;return v;}
        int size()const{return cnt;}
    };
}

int main() {
    ds_865259uqgw::Stack<int> stk;
    for(int x:{ 43, 69, 76, 52, 69, 37, 44, 98, 87, 39 }) stk.push(x);
    std::cout<<"Stack top: "<<stk.peek()<<" size: "<<stk.size()<<"\n";
    ds_865259uqgw::CQueue<int> q(20);
    for(int x:{ 43, 69, 76, 52, 69, 37, 44, 98, 87, 39 }) q.enqueue(x);
    std::cout<<"Queue size: "<<q.size()<<" dequeued: "<<q.dequeue()<<"\n";
    return 0;
}
