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

ListNode *insertAtHead(ListNode *head, int X){
    ListNode *insertNode = new ListNode(X);
    if (head == NULL){
        return insertNode;
    }
    insertNode->next = head;
    head = insertNode;
    return head;
}

ListNode *reverseList(ListNode *head){
    ListNode *curr = head;
    ListNode *prev = NULL;
    while (curr != NULL){
        ListNode *temp = curr;
        curr = curr->next;
        temp->next = prev;
        prev = temp;
    }
    return prev;
}

void print(ListNode *head){
    ListNode *temp = head;
    while (temp != NULL){
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    ListNode* head = new ListNode(10);
    head = insertAtHead(head,20);
    head = insertAtHead(head,30);
    print(head);
    head = reverseList(head);
    print(head);
}