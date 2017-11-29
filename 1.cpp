#include <iostream>

#include <memory>
using namespace std;

class B;
class A
{
		private:
			int a;
		public:
			virtual void print(int)final { cout << "A" << a << endl;};
			virtual ~A(){cout << "A out" << endl;}
			A(){cout << "A in" << endl;}
			void set( A& aa,int num){ aa.a=num;}
			virtual void f(int) const {std::cout << "B::f " << std::endl;}
};
class B:public A
{
		public:
		 	virtual void print(int)final  {cout << "B" << b << "--" << c<< endl;};
			//B(int btmp):c(6){cout << "11"<<endl; b=btmp;}
			B(){cout << "B in" << endl; b=1;}
			~B(){cout << "B out" << endl;}
			virtual void f(int) {std::cout << "D::f" << std::endl;}
		private:
			int b;
			int c;
};


int main(){
	B b;
	A *bb;
	B *bbb;
	bbb=&b;
	bb=&b;
	int c=1;
	short d=1;
	bb->print(c);
	bb->print(d);
	bbb->print(c);
	bbb->print(d);
	b.print(c);
	b.print(d);
	//b.print(())
}
