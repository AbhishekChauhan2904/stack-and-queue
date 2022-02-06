#include<bits/stdc++.h>
using namespace std;
#include "pair.cpp"
int main(){
   differentdatatype<differentdatatype<int,int>,int>p2;
   p2.setY(10);
   differentdatatype<int,int> p4;
   p4.setX(5);
   p4.setY(16);
   p2.setX(p4);
   cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;
}