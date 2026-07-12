#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

ListNode *insertAtHead(ListNode *&head, int X){
    ListNode *insertNode = new ListNode(X);
    if (head == NULL)
    {
        return insertNode;
    }
    insertNode->next = head;
    head = insertNode;
    return head;
}

// Find the length of Linked List
int getLength(ListNode *head){
    int length = 0;
    while (head != NULL)
    {
        length++;
        head = head->next;
    }
    return length;
}

int main(){
    ListNode *head = new ListNode(10);
    head = insertAtHead(head, 12);
    head = insertAtHead(head, 16);
    cout << getLength(head) << endl;
}