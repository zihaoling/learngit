#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print(int a)
{
	cout << a << endl;
}
int main(void)
{
	int i=0;
	vector<int>p(10,4);
	for(i=0; i<p.size(); i++)
	{
		cout << p[i] << endl;
	}
	return 0;
}
