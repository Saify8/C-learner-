#include<iostream>
using namespace std;

int main()
{
    int marks;
    marks=75;
 if(marks>=90)
  {
     cout<<"Grade A"<<endl;
    cin>>marks;
  }
   
 else if(marks>=80)

  {
    cout<<"Grade B"<<endl;
    cin>>marks;
  }

 else if(marks>=70)


  {
    cout<<"Grade C"<<endl; 
    cin>>marks;
  }

 else if(marks>=60)


  {
    cout<<"Grade D"<<endl;
    cin>>marks;
  }

 else if(marks>=50)

  { 
   cout<<"Grade E"<<endl;
   cin>>marks;
  }
 else 
  {
   cout<<"Fail";
  }
     return 0;
}