#include <iostream>
#include<stack>
using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertattail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = n;
// }

// void insertathead(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//     }

//     n->next = head;
//     head = n;
// }

// void display(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// bool search(node *head, int key)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data == key)
//         {
//             return true;
//         }

//         temp = temp->next;
//     }

//     return false;
// }

// void deletenode(node *&head, int val)
// {
//     node *temp = head;
//     node *prev;
//     if (head == NULL)
//     {
//         return;
//     }

//     if (head->next == NULL)
//     {
//         head = head->next;
//         delete (head);
//         return;
//     }

//     if (head->data == val)
//     {
//         temp = head;
//         head = head->next;
//         cout << " deleted node is " << temp->data << endl;
//         delete temp;
//         return;
//     }

//     while (temp->data != val)
//     {
//         if (temp->next == NULL)
//         {
//             return;
//         }

//         prev = temp;
//         temp = temp->next;
//     }
//     prev->next = temp->next;
//     cout << " deleted node is " << temp->data << endl;
//     delete temp;
// }

// node *reverselinkedlist(node *&head)
// {
//     node *currptr = head;
//     node *prevptr = NULL;
//     node *nextptr;

//     while (currptr != NULL)
//     {
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }

//     return prevptr;
// }

// node *reverserecursive(node *&head)
// {
//     if (head->next == NULL || head == NULL)
//     {
//         return head;
//     }

//     node *newhead = reverserecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;

//     return newhead;
// }

// node *reversek(node *&head, int k)
// { // thoda different hai revision karna hai.

//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;

//     int count = 0;

//     while (curptr != NULL && count < k)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;
//         prevptr = curptr;
//         curptr = nextptr;
//         count++;
//     }
//     if (nextptr != NULL)
//     {
//         head->next = reversek(nextptr, k);
//     }
//     return prevptr;
// }

// void makecycle(node *&head, int pos)
// {

//     node *temp = head;
//     node *startnode;

//     int count = 1;

//     while (temp->next != NULL)
//     {
//         if (count = pos)
//         {
//             startnode = temp;
//         }
//         temp = temp->next;
//         count++;
//     }

//     temp->next = startnode;
// }

// bool detectcycle(node *head)
// {

//     node *fastptr = head;
//     node *slowptr = head;

//     while (fastptr != NULL && fastptr->next != NULL)
//     {
//         fastptr = fastptr->next->next;
//         slowptr = slowptr->next;

//         if (fastptr == slowptr)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// void removecycle(node *&head)
// {
//     node *fastptr = head;
//     node *slowptr = head;

//     do
//     {
//         fastptr = fastptr->next;
//         slowptr = slowptr->next->next;
//     } while (slowptr != fastptr);

//     fastptr = head;
//     while (slowptr->next != fastptr->next)
//     {
//         slowptr = slowptr->next;
//         fastptr = fastptr->next;
//     }

//     slowptr->next = NULL;
// }

// int length(node *head)
// {
//     node *temp = head;

//     int count = 0;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }

//     return count;
// }

// void createintersectionpoint(node *&head1, node *&head2, int pos)
// {
//     node *temp1 = head1;
//     pos--;

//     while (pos)
//     {
//         temp1 = temp1->next;
//         pos--;
//     }

//     node *temp2 = head2;
//     while (temp2->next != NULL)
//     {
//         temp2 = temp2->next;
//     }

//     temp2->next = temp1;
// }

// int findintersectionpoint(node *head1, node *head2)
// {
//     int l1 = length(head1);
//     int l2 = length(head2);
//     int d;
//     node *ptr1;
//     node *ptr2;

//     if (l1 > l2)
//     {
//         d = l1 - l2;
//         ptr1 = head1;
//         ptr2 = head2;
//     }

//     else
//     {
//         d = l2 - l1;
//         ptr1 = head2;
//         ptr2 = head1;
//     }

//     while (d)
//     {
//         ptr1 = ptr1->next;
//         if (ptr1 == NULL)
//         {
//             return -1;
//         }
//         d--;
//     }

//     while (ptr1 != NULL && ptr2 != NULL)
//     {
//         if (ptr1 == ptr2)
//         {
//             return ptr1->data;
//         }
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }

//     return -1;
// }

// // video 64 first half iterative way not written .

// node *mergerecursive(node *&head1, node *&head2)
// {
//     if (head1 == NULL)
//     {
//         return head2;
//     }
//     if (head2 == NULL)
//     {
//         return head1;
//     }
//     node *result;
//     if (head1->data < head2->data)
//     {
//         result = head1;
//         result->next = mergerecursive(head1->next, head2);
//     }
//     else
//     {
//         result = head2;
//         result->next = mergerecursive(head1, head2->next);
//     }

//     return result;
// }

// int main()
// {
//     node *head1 = NULL;
//     node *head2 = NULL;
//     insertattail(head1, 1);
//     insertattail(head1, 2);
//     insertattail(head1, 3);
//     insertattail(head1, 4);
//     insertattail(head1, 5);
//     insertattail(head1, 6);
//     insertattail(head2, 9);
//     insertattail(head2, 10);
//     insertattail(head2, 3);
//     insertattail(head2, 4);
//     insertattail(head2, 5);
//     insertattail(head2, 6);

//     display(head1);
//     cout << endl;
//     display(head2);
//     cout << endl;
//     createintersectionpoint(head1, head2, 3);
//     display(head1);
//     cout << endl;
//     display(head2);
//     cout << endl;

//     cout << findintersectionpoint(head1, head2) << endl;

//     return 0;
// }

// singly linked list ends.

// doubly linked list starts.

// class node
// {

// public:
//     int data;
//     node *next;
//     node *prev;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//         prev = NULL;
//     }
// };

// void insertathead(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     n->next = head;
//     head->prev = n;
//     head = n;
// }
// void insertattail(node *&head, int val)
// {

//     if (head == NULL)
//     {
//         insertathead(head, val);
//         return;
//     }

//     node *n = new node(val);
//     node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = n;
//     n->prev = temp;
//     n->next = NULL;
// }

// void display(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << "  ";
//         temp = temp->next;
//     }
// }

// void deletenode(node *&head, int pos)
// {

//     node *temp = head;
//     int count = 1;

//     if (pos == 1)
//     {
//         head = head->next;
//         head->prev = NULL;
//         delete temp;
//         return;
//     }

//     while (temp != NULL & count != pos)
//     {
//         temp = temp->next;
//         count++;
//     }

//     temp->prev->next = temp->next;

//     if (temp->next != NULL)
//     {
//         temp->next->prev = temp->prev;
//     }

//     delete temp;
// }

// int length(node *head)
// {
//     node *temp = head;

//     int count = 0;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }

//     return count;
// }

// void appendlastknode(node *&head, int k)
// {

//     int l = length(head);
//     int n = 1;

//     node *newtail;
//     node *newhead;
//     node *tail = head;

//     while (tail->next != NULL)
//     {
//         tail = tail->next;
//         n++;
//         if (n==(l-k))
//         {
//             newtail = tail;

//         }
//         if(n==(l-k+1))
//         {
//             newhead = tail;
//         }

//     }

//     newtail->next = NULL;
//     newhead->prev = NULL;
//     tail->next = head;
//     head->prev = tail;

//     head = newhead;
// }

// int main()
// {
//     node *head = NULL;
//     insertattail(head, 1);
//     insertattail(head, 2);
//     insertattail(head, 3);
//     insertattail(head, 4);
//     insertattail(head, 5);
//     insertattail(head, 6);

//     display(head);
//     appendlastknode(head,1 );
//     cout<<endl;
//     display(head);
//     return 0;
// }

// #define n 100
 
// class stack{

//     int *arr;
//     int top;

//     public:
      
//        stack(){
//         arr = new int[n];
//         top = -1;
//        }


//        void push(int x )
//        {

//         if(top == n-1)
//         {
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }

//         top++;
//         arr[top]=x;

//        }

//        void pop()
//        {
//         if(top == -1)
//         {
//             cout<<"Stack Empty"<<endl;
//             return;
//         }
//           top--;
//        }
        
//        int Top()
//        { 
//         if(top == -1)
//         {
//             cout<<"Stack Empty"<<endl;
//             return -1;

//         }

//         return arr[top];

//        } 


//        bool empty()
//        {
//           if( top==-1)
//             return true;

//           else 
//             return false;
//        }

// };




// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<";;;;"<<endl;
//     st.pop();
//     cout<<";;;;"<<endl;
//     st.pop();
//     cout<<";;;;"<<endl;
//     cout<<st.empty()<<endl;
//     cout<<st.Top()<<endl;
//     return 0;
// }



void reversesentence(string s)
{
    stack<string> st;

    for(int i=0 ; i<s.length() ; i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);

    } 
     
     while(!st.empty())
     {
        cout<<st.top()<<" ";
        st.pop();

     }cout<<endl;
     
}

int main(){

    string s = "hello! what are you doing?";
    reversesentence(s);
    return 0;
}




               