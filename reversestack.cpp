#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> s1, stack<int> s2) {
	// Write your code here
    int x;
	 while(!s1.empty())
    {
        x=s1.top();
        s2.push(x);
        s1.pop();
    }
 
    s1=s2;
       for (int i = 0; i=!s1.empty(); i++)
{
cout<<s1.top()<<" ";
s1.pop();
}
}
int main(){
	stack<int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s.push(a);
	}
	

	 stack<int>s1;
	 reverseStack(s,s1);

	return 0;
}