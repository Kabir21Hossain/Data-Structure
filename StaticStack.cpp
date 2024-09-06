#include<bits/stdc++.h>
 using namespace std;
 #define size 5
 int top=-1;
 int st[size];
 void push(int a)
 {
    if( top>=size-1)
    {
        cout<<"Overflow"<<endl;
    }
    else
    st[++top]=a;
 }

 void pop()
 {
    if(top==-1)
    {
        cout<<"Underflow"<<endl;

    }
    else
    top--;

 }

void peek()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;

    }
    else
    cout<<st[top];

}

void display()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;;

    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
}
bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else return false;
}

bool isFull()
{
    if(top==size-1)
    {
        return true;
    }
    else return false;
}

int sizex()
{
    return top+1;
}

 void toolFunction()
{   
    int n;
    
    do
    {
        cout<<"1.push"<<endl<<"2.pop"<<endl;
        cout<<"3.peek"<<endl<<"4.isEmpty"<<endl;
        cout<<"5.isFull"<<endl<<"6.size"<<endl;
        cout<<"7.display"<<endl;
        cout<<"8.exit"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
                    int x;
                    cin>>x;
                    push(x);
                    break;

             
            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            cout<<isEmpty()<<endl;
            break;

            case 5:
            cout<<isFull()<<endl;
            break;


            case 6:
            cout<<sizex()<<endl;
            break;
            case 7:
            display();
            break;
            default:
            cout<<"sorry"<<endl;
            
        
        
        }
        
    } while (n!=8);
    
    
    
    
    

}


int main()
{
    toolFunction();


    return 0;
}