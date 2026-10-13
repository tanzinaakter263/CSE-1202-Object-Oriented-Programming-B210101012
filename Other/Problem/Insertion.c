#include<stdio.h>
#include<stdlib.h>
int main(){
int pos,i=1,count=0;
struct node{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
printf("Enter the position:");
scanf("%d",&pos);
if(pos>count){
    printf("invalid pos");
}
else{
    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
}
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter data:");
scanf("%d",&newnode->data);
newnode->next=temp->next;
temp->next=newnode;
while(temp!=0){
    printf("%d",temp->next);
    temp=temp->next;
}
printf("Inserted:");
return 0;
}
