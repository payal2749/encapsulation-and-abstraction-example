#include <bits/stdc++.h>
using namespace std;

class Adder
{
public:
    Adder()    
    {
       int Total=0;    
    }
    void addnumber(int h)
    {
       total+=h;    
        
    }
    void number()
    {
       cout<<total<<endl;    
        
    }
private:
    int total;
   
};
int main()
{
   Adder a;
   a.addnumber(3);
   a.addnumber(4);
   a.number();

   return 0;    
    
}