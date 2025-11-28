// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class cirl{
    public:
    node *head;
    node * tail;
    cirl(){
        head=tail=NULL;
    }
    void addb(int num){
         node *newnode=new node(num);
         if (head==NULL){
             head=tail=newnode;
             
             tail->next=newnode;
             
             
    }
    else{
        newnode->next=tail->next;
        head=newnode;
        tail->next=newnode;
    }
} 
   void print(){
       cout<<head->data<<endl;
       node*temp;
       temp=head->next;
       while(temp!=head){
           cout<<temp->data<<endl;
           temp=temp->next;
       };
       cout<<temp->data<<endl;
   }
   void inst(int num){
       node*newnode=new node(num);
       if(head==NULL){
           head=tail=newnode;
           tail->next=head;
           tail->next=newnode;
       }
       else{
           newnode->next=head;
           tail->next=newnode;
           newnode=tail;
       }
   }
};

int main() {
    // Write C++ code here
    cirl c;
    c.inst(1);

    c.inst(6);
    c.inst(2)
    c.print();

    return 0;
}