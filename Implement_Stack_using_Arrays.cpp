class ArrayStack {
    int arr[1000];
    int topIndex;

public:
    ArrayStack() {
        topIndex = -1;
    }

    void push(int x) {
        arr[++topIndex] = x;
    }

    int pop() {
        return arr[topIndex--];
    }

    int top() {
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};
