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

int lengthOfLoop(ListNode *head) {
        // code here
        if(head == NULL)return 0;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                break;
            }
        }
        if(fast == NULL || fast->next == NULL)return 0;
        
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* temp = slow->next;
        int count = 0;
        while(temp != slow){
            count++;
            temp = temp->next;
        }
        return count+1;
    }

int main(){
    ListNode *head = new ListNode(10);
    ListNode *tail = head;
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);
    head = insertAtHead(head, 40);
    tail = insertAtTail(head, tail, 50);

    tail->next = head->next->next;
    cout <<  "Length of the cycle : " << lengthOfLoop(head) << endl;
}