#include<bits/stdc++.h>
using namespace std;
#include"pairclass.cpp"
int main(){
	pairclass<int> p1;
	p1.setX(10);
	p1.setY(20);
	cout<<p1.getX()<<" "<<p1.getY()<<endl;
	pairclass<double> p2;
	p2.setX(100.34);
	p2.setY(20.34);
	cout<<p2.getX()<<" "<<p2.getY()<<endl;
	return 0;
}