class LinkedListStack {
    struct Node {
        int data;
        Node* next;

        Node(int x) {
            data = x;
            next = NULL;
        }
    };

    Node* topNode;

public:
    LinkedListStack() {
        topNode = NULL;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
    }

    int pop() {
        int value = topNode->data;
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;

        return value;
    }

    int top() {
        return topNode->data;
    }

    bool isEmpty() {
        return topNode == NULL;
    }
};
