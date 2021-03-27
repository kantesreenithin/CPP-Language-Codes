//https://www.hackerrank.com/challenges/rectangle-area/problem
#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

 class Rectangle
 {
     public:
     int b,h;
     public:
     void display()
     {
         cout<<b<<" "<<h;
     }
     
     
 };
 class RectangleArea:public Rectangle
 {
     public:
      void read_input()
     {
         cin>>b>>h;
     }
     void display()
     {
         cout<<"\n"<<b*h;
     }
 };


