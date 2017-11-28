#include <iostream>  
using namespace std;  
int main () {  
    try  
    {  
		char st[]="111";
        throw st;  
        throw "error";  
    }  
    catch(char *str)  
    {  
        cout << str << endl;  
    }  
    catch(int i)  
    {  
        cout << i << endl;  
    }  
} 
