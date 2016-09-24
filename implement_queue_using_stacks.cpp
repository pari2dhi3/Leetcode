#include<bits/stdc++.h>
using namespace std;
class Queu 
{
	public:
		stack<int> mystack;
		stack<int> mystack1;
		// Push element x to the back of queue.
		void push(int x) 
		{
			int i,j;
			if(mystack.size()==0)
			{
				cout << "push the first element in mystack : " << x << endl;
				mystack.push(x);
			}
			else
			{
				cout << "size of mystack : " << mystack.size() << endl;
				for(j=0;j<mystack.size();j++)
				{
					i=mystack.top();
					mystack.pop();
					cout << "pop from mystack to mystack1 : " << i << endl;
					mystack1.push(i);
				}
				mystack.push(x);
				cout << "the new pushed element in mystack : " << x << endl;
				for(j=0;j<mystack1.size();j++)
				{
					i=mystack1.top();
					mystack1.pop();
					cout << "push in mystack from mystack1 : " << i << endl;
					mystack.push(i);
				}
			}
		}
		// Removes the element from in front of queue.
		void pop(void) 
		{
			cout << "pop : " << mystack.top() << endl;
			mystack.pop();
			return;
		}
		// Get the front element.
		int peek(void) 
		{
			cout << "peek : " << mystack.top() << endl;
			return mystack.top();
		}
		// Return whether the queue is empty.
		bool empty(void) 
		{
			if(mystack.size()==0)
				return true;
			else
				return false;

		}
};
int main()
{
	ios_base::sync_with_stdio(false);
	Queu u;
	int t;

	u.push(1);
	u.push(2);
	u.pop();
	u.push(3);
	u.push(4);
	u.pop();
	t=u.peek();

	cout << t << endl;

	return 0;
}

		
