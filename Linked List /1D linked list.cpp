// creating a ll

class Node{
    Public: // access modifier
    int data; // the data value
    Node* next; // the pointer to the next value
    Public:
    // constructor
    Node (int data1, Node* next1){
        data=data1;  // Initialize data with the provided value
        next=next1;  // Initialize next with the provided
    }
    Node (int data1){
        data=data1;  // Initialize data with the provided value
        next=nullptr;  // Initialize next as null since it's the end of the list

    }
};


int main() {
    vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
}

// convert array to ll

// traversal in ll

// length of ll

int length(Node *head)
{
	//Write your code here
    int cnt = 0;
    Node * temp = head;
    while(temp) {
        temp = temp -> next;
        cnt++;
    }
    return cnt;
}

// search an element in ll

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int>* temp = head;
    while(temp) {
        if(temp -> data == k) return 1;
        temp = temp -> next;
    }
    return 0;
}

// insertion in ll

// deletion in ll
