#include<stdio.h>
#include<stdlib.h>

    struct node
    {
        int data;
        struct node* next;  
    };

    struct node *top=NULL;

    void push(int x)
    {
        struct  node *newnode=NULL;
        newnode=(struct node*)malloc(sizeof(struct node));

        if(top==NULL)
        {
        newnode->data=x;
        newnode->next=NULL;
        top=newnode;
        }
        else
        {
            newnode->data=x;
            newnode->next=top;
            top=newnode;
            
        }
    
     }

    void pop()
    {
        if(top==NULL)
        {
            printf("UNDERFLOW\n");
        }
        // else if(top->next==NULL)
        // {
        //     top=NULL;
        // }
        else
        top=top->next;
    }

   void  isEmpty()
    {
        if(top==NULL)
        {
            printf("TRUE\n");

        }
        else
        printf("FALSE\n");

    }

    void display()
    {
        struct node* temp;
        temp=top;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;

        }
        free(temp);
        
    }

    void size()
    {
        int len=0;
        struct node* temp;
        temp=top;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;

        }
        
        printf("%d\n ",len);
        free(temp);

    }


int main()
{
    push(5);
    push(0);
    push (8);
    push(4);

    // for(int i=1;i<5;i++)
    // { int k =i;
    //     push(k*3);

    // }

    display();
    printf("\n");
    size();
    printf("\n");
    // isEmpty();
    pop();
    display();
    printf("\n");
    size();
    pop();
    isEmpty();

return 0;

}
