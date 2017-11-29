#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class A{
	public:
	explicit A(int& tmp){};

	void operator() (int n) const{
		cout << n;
		if(n%2 == 0)
		{
			cout << "j" << endl;
		}
		else
		{
			cout << "o" << endl;
		}
	}
};

int main(void)
{
	vector<int> v;
	for(int i=0; i<10; i++)
	{
		v.push_back(i);
	}
	int count=0;
	for_each(v.begin(),v.end(),A(count));


	return 0;
}
