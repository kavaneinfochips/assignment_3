#include <iostream>
using namespace  std;

class student{

  public:
    char name[100];
    int attend;
    float score;
    int total;
    int grade;

};


typedef class student st; 

int main()
{
    st *s1= (st *)malloc(sizeof(st));
    cout<<" \nEnter the name of student \n";
    cin>>s1->name;
    cout<<" \nEnter the Attendance \n";
    cin>>s1->attend;
    cout<<" \nEnter the score \n";
    cin>>s1->score;
    cout<<" \nEnter the total Score \n";
    cin>>s1->total;

    if((s1->attend)>50 && (s1->score)>70 && (s1->total)>5600 )
        {
            s1->grade=10;
           
            cout<<"Congrats " <<s1->name<< " Score "<< s1->grade<<"\n";
        }
   else if((s1->attend)>50 && (s1->score)>70 )
        {
            s1->grade=9;
            cout<<"Congrats " <<s1->name<< " Score "<< s1->grade<<"\n";
        } 
   else if((s1->score)>70 && (s1->total)>5600 )
        {
            s1->grade=8;
            cout<<"Congrats " <<s1->name<< " Score "<< s1->grade<<"\n";
        }  
    else if((s1->attend)>50 && (s1->total)>5600 )
        {
            s1->grade=7;
             cout<<"Congrats " <<s1->name<< " Score "<< s1->grade<<"\n";
        } 
    else  if((s1->attend)>50 || (s1->score)>70 || (s1->total)>5600  )
        {
            s1->grade=6;
            cout<<"You " <<s1->name<< " Score "<< s1->grade<<"\n";
        } 
    else{
        s1->grade=5;
        cout<<"Score bad grade GIT "<<s1->grade<<"\n DO more practice of GIT"<<s1->name<<"\n";
    }    


    

}
