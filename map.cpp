   #include <map>  
   #include <string>  
   #include <iostream>  
   using namespace std;  
   int main()  
   {  
          map<int, string> mapStudent;  
          mapStudent.insert(pair<int, string>(1, "student_one"));  
         mapStudent.insert(pair<int, string>(2, "student_two"));  
          mapStudent.insert(pair<int, string>(3, "student_three"));  
          map<int, string>::iterator iter;  
         iter = mapStudent.find(1);  
         if(iter != mapStudent.end())  
        {  
              cout<<"Find, the value is "<<iter->first<<endl;  
          }  
          else  
          {  
             cout<<"Do not Find"<<endl;  
          }  
   }  

