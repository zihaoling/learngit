#include <iostream>

#include <memory>
using namespace std;

class B;
class A
{
		private:
			int a;
		public:
			void print(){ cout << "A" << a << endl;};
			virtual ~A(){cout << "A out" << endl;}
			A(){cout << "A in" << endl;}
			void set( A& aa,int num){ aa.a=num;}			
};
class B:public A
{
		public:
		 	void print(){cout << "B" << b << "--" << c<< endl;};
			//B(int btmp):c(6){cout << "11"<<endl; b=btmp;}
			B(){cout << "B in" << endl; b=1;}
			~B(){cout << "B out" << endl;}
		private:
			int b;
			int c;
};


int main(){
		std::unique_ptr<B> px(new B);
//	bb.print();
}
