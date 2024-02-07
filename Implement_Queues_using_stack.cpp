class MyStack {
public:
    queue<int> q1, q2;//1st and 2nd queues declaration
    MyStack() {}//Stack Initialization
    void push(int x) {q1.push(x);}//pushing the 1st queue with element}
    int pop() {//removal of  stack's Topmost element 
        while(q1.size() > 1){//return stack top most removal element
            q2.push(q1.front());//pushing an element in stack
            q1.pop();}//poping /removal the stack element}
        //last element in q1
        int x = q1.front(); q1.pop();//removing the stack's frontmost element
        q1.swap(q2);//swapping both the queues 
        return x;}//printing 1st queue front val
    int top() {return q1.back();}//printing the 1st queue's topmost element 
    bool empty(){return q1.empty();}};//printing the 1st free queue( deallocated memeory of q1)};
