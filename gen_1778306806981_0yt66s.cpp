// Auto-generated: 2026-05-09 11:36:46
// Module: Linked List — 1778306806981_0yt66s
#include <iostream>
#include <memory>
#include <stdexcept>

namespace ds_17783068 {

    template<typename T>
    struct Node {
        T data;
        std::shared_ptr<Node<T>> next;
        explicit Node(T val) : data(val), next(nullptr) {}
    };

    template<typename T>
    class LinkedList {
        std::shared_ptr<Node<T>> head;
        int size_ = 0;
    public:
        void push_front(T val) {
            auto node = std::make_shared<Node<T>>(val);
            node->next = head;
            head = node;
            ++size_;
        }
        void push_back(T val) {
            auto node = std::make_shared<Node<T>>(val);
            if (!head) { head = node; ++size_; return; }
            auto cur = head;
            while (cur->next) cur = cur->next;
            cur->next = node;
            ++size_;
        }
        int size() const { return size_; }
        void print() const {
            auto cur = head;
            while (cur) { std::cout << cur->data << " -> "; cur = cur->next; }
            std::cout << "NULL\n";
        }
        void reverse() {
            std::shared_ptr<Node<T>> prev = nullptr, cur = head, next;
            while (cur) { next = cur->next; cur->next = prev; prev = cur; cur = next; }
            head = prev;
        }
    };

} // namespace ds_17783068

int main() {
    ds_17783068::LinkedList<int> list;
    for (int x : { 78, 57, 19, 95, 29, 7, 8, 68, 11, 10 }) list.push_back(x);
    std::cout << "List: "; list.print();
    list.reverse();
    std::cout << "Reversed: "; list.print();
    std::cout << "Size: " << list.size() << "\n";
    return 0;
}
