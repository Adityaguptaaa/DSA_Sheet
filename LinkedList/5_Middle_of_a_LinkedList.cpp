#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int data){
        this->data = data;
        this->next = NULL;
    }

};

ListNode* insertAtHead(ListNode *&head, int X){
    ListNode *insertNode = new ListNode(X);
    if (head == NULL)
    {
        return insertNode;
    }
    insertNode->next = head;
    head = insertNode;
    return head;
}

int length(ListNode* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}

ListNode* middleNode(ListNode* head) {
    int mid = length(head)/2;
    ListNode* temp = head;
    while(mid--){
        temp = temp->next;
    }
    return temp;
}

void print(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    ListNode* head = new ListNode(10);
    head = insertAtHead(head,12);
    head = insertAtHead(head,14);
    head = insertAtHead(head,16);
    head = insertAtHead(head,18);
    print(head);
    ListNode* mid = middleNode(head);
    print(mid);
}