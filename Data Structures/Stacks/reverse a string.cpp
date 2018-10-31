
#include<bits/stdc++.h> 
  
using namespace std; 
  
//Class to implement Stack 
class Stack 
{ 
    private: 
    char * a; 
    public: 
    int t; 
    void pop(); 
    void push(char b); 
    bool empty(); 
    Stack(int size) 
    { 
        a= new char[size]; 
        t=-1; 
    } 
}; 
  
// Class to print out element 
void Stack::pop() 
{ 
    if(empty()) 
    { 
        cout<<"Empty Stack"<<endl; 
        return; 
    } 
      
    cout<<a[t]; 
    t--; 
} 
  
//Class to insert element 
void Stack::push(char b) 
{ 
    a[++t]=b; 
} 
  
//To check if stack is empty or not 
bool Stack::empty() 
{ 
    return t<0; 
} 
  
//Function to reverse string 
void reverse(Stack k) 
{ 
    while(!k.empty()) 
    { 
        k.pop(); 
    } 
} 
// Driver code 
int main() { 
      
    Stack block(5); 
    block.push('h'); 
    block.push('e'); 
    block.push('l'); 
    block.push('l'); 
    block.push('o'); 
    reverse(block); 
    return 0; 
} 