//
//  main.cpp
//  Stack
//
//  Created by yuteng Wu on 9/9/20.
//  Copyright © 2020 Yuteng Wu. All rights reserved.
//

#include <iostream>

using namespace std;




template<class T>
class Node
{
public:
   T data;
   Node *next;
};







template<class T>
class Stack
{



public:
   Stack();
   ~Stack();

   void push(T data);
   void pop();
   void display();
   bool isEmpty();
   T peek();




};


int main()
{
   Stack<int> *stack = new Stack<int>();
   // Push the elements of stack
   stack->push(11);
     stack->push(22);
     stack->push(33);
     stack->push(44);

     // Display stack elements
     stack->display();

     // Print top element of stack
     cout << "\nTop element is "
          << stack->peek() << endl;

     // Delete top elements of stack
     stack->pop();
     stack->pop();

     // Display stack elements
     stack->display();

     // Print top element of stack
     cout << "\nTop element is "
          << stack->peek() << endl;

     return 0;

}









template<class T>
Node<T> *top = NULL;

template<class T>
Stack<T>::Stack(){}

template<class T>
Stack<T>::~Stack(){}




template<class T>
void Stack<T>::push(T data)
{
   Node<T> *temp = new Node<T>();

   temp->data = data;
   temp->next = top<T>;
   top<T> = temp;

}




template<class T>
void Stack<T>::pop()
{
   Node<T> *temp;

   if(top<T> == NULL) return;

   temp = top<T>;

   top<T> = top<T>->next;

   delete temp;

}






template<class T>
void Stack<T>::display()
{
   Node<T> *temp;

   if(top<T> == NULL) return;

   temp = top<T>;
   while(temp != NULL)
   {
      cout << temp->data << endl;
      temp = temp->next;
   }
}


template<class T>
bool Stack<T>::isEmpty()
{
   return top<T> == NULL;
}


template<class T>
T Stack<T>::peek()
{
   if(!isEmpty())
   {
      return top<T>->data;
   }
   else
   {
      cout << "Stack empty."<<endl;
      return 0;
   }


}








