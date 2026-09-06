#include<bits/stdc++.h>
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

ListNode* insertAtTail(ListNode* head,ListNode* tail,int x){
    ListNode* insertNode = new ListNode(x);
    if(head == NULL){
        head = tail = insertNode;
        return tail;
    }
    tail->next = insertNode;
    tail = insertNode;
    return tail;
}

void print(ListNode *head){
    ListNode *temp = head;
    while (temp != NULL){
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}


ListNode *detectCycle(ListNode *head) {
    if(head == NULL)return head;
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            slow = head;
            break;
        }
    }
    if(fast == NULL || fast->next == NULL)return NULL;

    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}


int main(){
    ListNode *head = new ListNode(10);
    ListNode *tail = head;
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);
    head = insertAtHead(head, 40);
    tail = insertAtTail(head, tail, 50);
    print(head);
    cout << "tail connects to node : " << detectCycle(head) << endl;
    tail->next = head->next->next;
    cout <<  "tail connects to node : " << detectCycle(head)->data << endl;
}