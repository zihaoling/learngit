#include <iostream>

#include <memory>
using namespace std;

class A
{
		private:
			int a;
		public:
			void print(){ 
				cout << "A" << a << endl;
				cout << *this <<endl;
				cout << [this] <<endl;
			};
			virtual ~A(){cout << "A out" << endl;}
			A(){cout << "A in" << endl;}
};


int main(){
	A a;
	a.print();
}
