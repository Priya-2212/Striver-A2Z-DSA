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
