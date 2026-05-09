// Auto-generated: 2026-05-09 11:13:00
// Module: Stack & Queue — 1778305380094_xkjl19
#include <iostream>
#include <stdexcept>
#include <vector>

namespace ds_17783053 {

    template<typename T>
    class Stack {
        std::vector<T> data;
    public:
        void push(T val) { data.push_back(val); }
        T pop() {
            if (data.empty()) throw std::underflow_error("Stack underflow");
            T top = data.back(); data.pop_back(); return top;
        }
        T peek() const {
            if (data.empty()) throw std::underflow_error("Stack empty");
            return data.back();
        }
        bool empty() const { return data.empty(); }
        int size() const { return static_cast<int>(data.size()); }
    };

    template<typename T>
    class CircularQueue {
        std::vector<T> buf;
        int head = 0, tail = 0, count = 0;
        int cap;
    public:
        explicit CircularQueue(int cap) : buf(cap), cap(cap) {}
        void enqueue(T val) {
            if (count == cap) throw std::overflow_error("Queue full");
            buf[tail] = val; tail = (tail + 1) % cap; ++count;
        }
        T dequeue() {
            if (count == 0) throw std::underflow_error("Queue empty");
            T val = buf[head]; head = (head + 1) % cap; --count; return val;
        }
        int size() const { return count; }
    };

} // namespace ds_17783053

int main() {
    ds_17783053::Stack<int> stk;
    for (int x : { 26, 88, 79, 14, 53, 45, 81, 77, 58, 7 }) stk.push(x);
    std::cout << "Stack peek: " << stk.peek() << "  size: " << stk.size() << "\n";

    ds_17783053::CircularQueue<int> q(10);
    for (int x : { 26, 88, 79, 14, 53, 45, 81, 77, 58, 7 }) q.enqueue(x);
    std::cout << "Queue size: " << q.size() << "\n";
    std::cout << "Dequeued:   " << q.dequeue() << "\n";
    return 0;
}
