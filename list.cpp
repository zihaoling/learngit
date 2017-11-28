// list::assign
#include <iostream>
#include <list>

int main ()
{
  std::list<int> first;
  std::list<int> second;

  //first.assign (7,100);                      // 7 ints with value 100
  second.assign (first.begin(),first.end()); // a copy of first
	first.push_front(6);
	first.push_front(5);
	first.push_front(4);
	first.push_front(3);
	first.push_front(2);

  std::cout << "Size of first: " << int (first.size()) << '\n';
  std::cout << "Size of second: " << int (second.size()) << '\n';	
  std::cout << first. << '\n';
  std::cout << first.front() << '\n';
  return 0;
}
