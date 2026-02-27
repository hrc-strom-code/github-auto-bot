// Auto-generated: 2026-05-11 11:58:01
// Topic: Singly Linked List with Reverse
#include <iostream>
#include <memory>

namespace linked_list_881070foas {
    template<typename T> struct Node {
        T data; std::shared_ptr<Node<T>> next;
        explicit Node(T v):data(v),next(nullptr){}
    };
    template<typename T> class List {
        std::shared_ptr<Node<T>> head; int sz=0;
    public:
        void push_back(T v) {
            auto n=std::make_shared<Node<T>>(v);
            if(!head){head=n;++sz;return;}
            auto c=head; while(c->next) c=c->next; c->next=n; ++sz;
        }
        void reverse() {
            std::shared_ptr<Node<T>> p=nullptr,c=head,nx;
            while(c){nx=c->next;c->next=p;p=c;c=nx;} head=p;
        }
        void print() const {
            auto c=head; while(c){std::cout<<c->data<<" -> ";c=c->next;} std::cout<<"NULL\n";
        }
        int size() const {return sz;}
    };
}

int main() {
    linked_list_881070foas::List<int> lst;
    for(int x:{ 63, 80, 11, 67, 99, 79, 2, 2 }) lst.push_back(x);
    std::cout<<"List:     "; lst.print();
    lst.reverse();
    std::cout<<"Reversed: "; lst.print();
    std::cout<<"Size: "<<lst.size()<<"\n";
    return 0;
}
