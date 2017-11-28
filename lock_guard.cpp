#include <iostream>  
#include <thread>  
#include <mutex>  
  
std::mutex mtx;  
  
void printThreadID(int id)  
{  
    mtx.lock();  
    std::lock_guard<std::mutex>lck(mtx, std::adopt_lock);  
    std::cout << "thread # " << id << '\n';  
}  
  
void testAdoptingConstructor()  
{  
    std::thread threads[10];  
  
    for (int i = 0; i < 10; ++i)  
    {  
        threads[i] = std::thread(printThreadID, i + 1);  
    }  
  
    for (auto& th : threads)  
    {  
        th.join();  
    }  
}  
  
int main()  
{  
    testAdoptingConstructor();  
    return 0;  
}  
