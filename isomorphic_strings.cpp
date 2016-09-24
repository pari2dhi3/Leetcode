#include<bits/stdc++.h>
using namespace std;
/*
   bool isIsomorphic(string s, string t)
   {
   vector<int> ss(26,0);
   int i;
   if((s.size())!=(t.size()))
   return false;
   for(i=0;i<s.size();i++)
   {
   if(ss[s[i]-97]==0)
   ss[s[i]-97]=t[i]-96;
   else if((ss[s[i]-97])!=(t[i]-96))
   return false;
   }
   return true;    
   };
 */
int main()
{
	ios_base::sync_with_stdio(false);
	string s,t;
	bool ans;
	cin >> s;
	cin >> t;
	/*ans=isIsomorphic(s,t);
	  if(ans==0)
	  cout << "False" << endl;
	  else
	  cout << "True" << endl;
	  return 0;	*/
	vector<int> ss(26,0);
	vector<int> tt(26,0);
	int i,flag;
	flag=0;
	if((s.size())!=(t.size()))
	{
		cout << "false" << endl;
		flag=1;
	}
	else
	{
		for(i=0;i<s.size();i++)
		{
			if((ss[s[i]-97]==0)&&(tt[t[i]-97]==0))
			{
				ss[s[i]-97]=t[i]-96;
				tt[s[i]-97]=s[i]-96;
			}
			else if(((ss[s[i]-97])!=(t[i]-96))||((tt[t[i]-97])!=(s[i]-96)))
			{
				cout << "false" << endl;
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
		cout << "true" << endl;
};



