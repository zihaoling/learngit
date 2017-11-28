// make_shared example
#include <iostream>
#include <memory>

int main () {

  std::shared_ptr<unsigned int> foo = std::make_shared<unsigned int> (1);

  std::cout << "*foo: " << sizeof(*foo) << '\n';
  std::cout << "*foo: " << foo << '\n';

 int *a;
  std::cout << sizeof(*a) << '\n';
  return 0;
}
