#include <iostream>
#include <memory>
using namespace std;
int main(void){

auto p = std::make_shared<int>(42);
std::weak_ptr<int> wp = p;
 
std::cout << *wp << std::endl;
{
//auto sp = wp.lock();
//std::cout << *sp << std::endl;
}
 
//p.reset();
 
if(wp.expired())
std::cout << "expired" << std::endl;
}

