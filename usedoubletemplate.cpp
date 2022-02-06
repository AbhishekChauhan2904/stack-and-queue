#include<bits/stdc++.h>
using namespace std;
#include"differentdatatype.cpp"
 int main(){
     differentdatatype<int, double> p1;
     p1.setX(100.34);
     p1.setY(100.34);
     cout<<p1.getX()<<" "<<p1.getY()<<endl;
 	return 0;
 }