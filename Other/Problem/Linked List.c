#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void deleteStart(struct node **head)
{
    struct node *temp=*head;
    if(*head==0)
        printf("Linked list Empty");
    return ;
    *head=(*head)->next;
    printf("Deleted:%d\n",temp->data);
    free(temp);
}
/*void insertPosition(int pos,int data,struct node **head){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
    if(pos<0)
        printf("Invaild position");
    else if(pos==0){
        newnode->next=*head;
        *head=newnode;
    }
    else{
        struct node *temp=*head;
        while(--pos)
            temp=temp->next;
            newnode->next=temp->next;
            temp->next=newnode;

        }
    }*/
    void display(struct node *node){

        while(node!=0){
            printf("%d" , node->data);
            node  =  node->next;
        }
        printf("\n\n");
    }


/*void insertEnd(struct node **head,int data){
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=data;
 newnode->next=NULL;
 if(*head==NULL) {
    *head=newnode;
    return;
 }*/
 /*struct node *temp=*head;
 while(temp->next!=0)
    temp=temp->next;
 temp->next=newnode;
 printf("%d inserted at the end\n",data);
}
void display(struct node *node){
while(node!=0){
    printf("%d",node->data);
    node=node->next;
}
printf("\n");
}*/
int main(){
   struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=9;
    third->next=fourth;
    fourth->data=10;
    fourth->next=NULL;
    printf("Linked list Before Operations:");
    //printf("inserted at the end of before:\n");
    display(head);
   // insertPosition(3,15,&head);
    //insertEnd(&head,50);
   /*insertEnd(&head,55);
    insertEnd(&head,56);
    insertEnd(&head,57);*/
   // printf("inserted at the end of after\n:");
   deleteStart(&head);
   deleteStart(&head);
    //display(head);
    printf("Linked list after Operations:");
    //printf("inserted at the end of before:\n");
    display(head);

    //display(head);
    return 0;
}
