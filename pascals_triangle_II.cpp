#include<bits/stdc++.h>
using namespace std;
int main()
{
	int rowIndex;
	cin >> rowIndex;
	vector< vector<int> > pasc(rowIndex+1);
	int i,j;
	pasc[0].push_back(1);
	for(i=1;i<=rowIndex;i++){
		pasc[i].push_back(1);
		for(j=0;j<pasc[i-1].size()-1;j++)
		{
			pasc[i].push_back(pasc[i-1][j]+pasc[i-1][j+1]);
		}
		pasc[i].push_back(1);
	}
	for(i=0;i<pasc[rowIndex].size();i++)
	{
		cout << pasc[rowIndex][i] << "   ";
	}
	return 0;
}
