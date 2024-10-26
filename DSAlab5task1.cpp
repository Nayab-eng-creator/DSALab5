#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node* prv;
Node(int data){
this->data=data;
this->next=NULL;
this->prv = NULL;
}
};
Node* head = NULL;
void addAtB(int data){
Node* newNode= new Node(data);
if(head!=NULL){
head->prv = newNode;
}
newNode->next=head;
head= newNode;
}
void display(){
Node* temp = head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp = temp->next;
}
cout<<"NULL"<<endl;
}
void AddatE(int data){
Node* newNode= new Node(data);
if(head==NULL){
head= newNode;
return;
}
Node* temp = head;
while(temp->next!=NULL){
temp = temp->next;
}
temp->next=newNode;
newNode->prv= temp;
}
int main()
{
int num1;
int num2;
int ch;
cout<<"Menu\n";
cout<<"Enter 1 if you want to add At start"<<endl;
cout<<"Enter 2 if you want to add At End"<<endl;
cout<<"Enter 3 to display"<<endl;
cout<<"Enter 4 if you want to stop the program"<<endl;
while(1){
cout<<"Enter you choice:";
cin>>ch;
if(ch==1){
cout<<"Enter data to insert at start"<<endl;
cin>>num1;
addAtB(num1);
}
else if(ch==2){
cout<<"Enter data to insert at End"<<endl;
cin>>num2;
AddatE(num2);
}
else if(ch==3){
display();
}
else{
return 0;
}
}
return 0;
}