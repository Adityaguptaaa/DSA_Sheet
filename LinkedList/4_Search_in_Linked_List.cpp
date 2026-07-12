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


 bool searchKey(ListNode* head, int key) {
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

int main(){
    ListNode *head = new ListNode(10);
    head = insertAtHead(head, 12);
    head = insertAtHead(head, 16);
    if(searchKey(head,12)){
        cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }
}