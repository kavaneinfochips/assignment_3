#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()

{ 
  string k;
  vector<string>nam(5); 
  vector<string>::iterator p;
  vector<string>nam1(5); 
  vector<string>::iterator q;

  vector<string>out(10); 
  vector<string>::iterator a;
  
  
  p=nam.begin();
  cout<<"enter \n";
  for(int i=0;i<5;i++)
  {   cin>>k;
    cout<<"\n";
      *p=k;
      p++;
  }
 p=nam.begin(); 
  for(int i=0;i<5;i++)
  {
      cout<<*p<<"\n";
      p++;

  }

//cout<<" \n Enter S2 \n";


  q=nam1.begin();
  cout<<" \n  enter S2 \n";
  for(int i=0;i<5;i++)
  {   cin>>k;
    cout<<"\n";
      *q=k;
      q++;
  }
 q=nam1.begin(); 
  while(q!=nam1.end())
  {
      cout<<*q<<"\n";
      q++;

  }



 p=nam.begin(); 
 q=nam1.begin(); 


for(int i=0;i<5;i++)
{
  
  for (auto i =nam1.begin(); i != nam1.end(); ++i)
   {
        if (*i==*p) 
        {
            nam1.erase(i);
            i--;
        }
    }
    p++;
  
  }
  

cout<<"\n Modified \n";

q=nam1.begin(); 
  while(q!=nam1.end())
  {
      cout<<*q<<"\n";
      q++;

  }


  //p=nam.end();
  q=nam1.begin();
   while(q!=nam1.end())
   {
    //  nam.insert(p,*q);
    nam.push_back(*q);
     q++;
     //p++;
     
   }
    cout<<"\n OUTPUT \n";
    p=nam.begin(); 
  while(p!=nam.end())
  {
      cout<<*p<<"\n";
      p++;

  }


}







 


  