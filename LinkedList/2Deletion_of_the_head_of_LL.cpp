#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode *next;

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

void print(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

                                    //delete the head Node
ListNode *deleteHead(ListNode *&head){
    if (head == NULL){
        return head;
    }
    ListNode *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return head;
}

int main(){
    ListNode* head = new ListNode(10);
    head = insertAtHead(head,12);
    head = insertAtHead(head,14);
    head = insertAtHead(head,16);
    print(head);

    head = deleteHead(head);
    print(head);
}