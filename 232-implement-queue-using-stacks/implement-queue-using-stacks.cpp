// Queue : First in first out
// Stack : Last in first out
// Vi du mang [1,2,3]
/*
push(4) -> [1,2,3,4]
pop() -> [2,3,4]
*/
class MyQueue {
public:
    stack<int> St1;
    stack<int> St2;
    MyQueue() {
        
    }
    // Day cac gia tri vao trong stack 1
    void push(int x) {
        St1.push(x);
    }
    
    int pop() {
        // Neu stack St2 ko co gi, while stack St1 chua het, 
        if(St2.empty()){
            while(!St1.empty()){
                St2.push(St1.top());
                St1.pop();
            }
        }
        int giatri = St2.top();
        St2.pop();
        return giatri;
    }
    //Tra ve cac gia tri ve St1
    int peek() {
        if(St2.empty()){
            while(!St1.empty()){
                St2.push(St1.top());
                St1.pop();
            }
        }
        return St2.top();
    }
    // St1 va St2 khong con phan tu se ket thuc
    bool empty() {
        return St1.empty() && St2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */