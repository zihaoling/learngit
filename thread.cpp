#include <iostream>
#include <thread>
using namespace std;
void print(int id){//线程处理函数
	std::cout<< "thread#" << id << endl;
}
int main(void)
{
	std::thread threads[2];
	for(int i=0; i<2; i++)
		threads[i] = std::thread(print,i+1);//初始化
	for(auto& th : threads)
		th.join();//加入线程
}

