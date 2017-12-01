#include<iostream>

using namespace std;

template<class T>
class stack
{
   t element[10];
   int top;
   public:
            stack()
            {
               top=9;
            }
            void push(T val)
            {
               if(top==0)
                  cout<<"\nStack is full";
               else
               {
                  element[top]=val;
                  top+=1;
               }
            }
            void pop()
            {
               if(top==9)
                   cout<<"\nStack is empty";
               else
               {
                   cout<<"\n"<<element[top+1];
                   top--;
               }
            }
};
int main()
{
    stack<int>s1;
    s1.push(10);
    s1.pop();
    stack<float>s2;
    s2.push(10.4);
    s2.pop();
    return 0;
}
