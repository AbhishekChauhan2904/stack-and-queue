#include<bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> &q) {
	// Write your code here
  if(q.empty()){
  	return;
  }
  int x=q.front();
q.pop();
reverseQueue(q);
q.push(x);
}
int main(){
	queue<int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s.push(a);
	}
	reverseQueue(s);
	 for(int i=0;i<n;i++){
     cout<<s.front()<<" ";
     s.pop();

	 }

	return 0;
}