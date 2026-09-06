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

ListNode *insertAtHead(ListNode *head, int X){
    ListNode *insertNode = new ListNode(X);
    if (head == NULL){
        return insertNode;
    }
    insertNode->next = head;
    head = insertNode;
    return head;
}

ListNode *insertAtTail(ListNode *head, ListNode *tail, int x){
    ListNode *insertNode = new ListNode(x);
    if (head == NULL){
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

bool hasCycle(ListNode *head){
    if (head == NULL)return head;
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (slow->next != NULL && fast->next != NULL && slow != fast){
        if (fast->next->next == NULL)
            return false;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow == fast)return true;
    return false;
}

int main()
{
    ListNode *head = new ListNode(10);
    ListNode *tail = head;
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);
    head = insertAtHead(head, 40);
    tail = insertAtTail(head, tail, 50);
    cout << hasCycle(head) << endl;
    tail->next = head;
    cout << hasCycle(head) << endl;
}