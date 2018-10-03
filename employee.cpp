#include<iostream>
#include<string>
using namespace std;

class employee{
public:
  employee(){

    fstname="hammad";
    lastname="bashir";
    salary=0.0;
  }
  void setfstname(string name1)
  {
    fstname=name1;
  }
  void setlastname(string name2)
  {
    lastname=name2;
  }

void setsalary(double salary1)
{
  if(salary1<0)
  {
    salary1=salary1*-1;
  }
  salary1=salary1*12;
  salary=salary1;

}
string getfstname()
{
  return fstname;
}
string getlastname()
{
  return lastname;
}
double getsalary()
{

  return salary;
}
double getraise10()
{
  return salary=salary+(salary*0.1);

}





private:
  string fstname;
  string lastname;
  double salary;

};
int main(){
  employee a,b;
  a.setfstname("faisal");
  a.setlastname("shahzad");
  a.setsalary(10);
  cout<<"first name of 1st employee  : "<<a.getfstname()<<endl;
  cout<<"lastname name of 1st employee  :  "<<a.getlastname()<<endl;
  cout<<"yearly salary of 1st employee  :  "<<a.getsalary()<<endl;
cout<<endl<<endl;
  b.setfstname("junaid");
  b.setlastname("hassan");
  b.setsalary(20);
  cout<<"first name of 2nd employee  :  "<<b.getfstname()<<endl;
  cout<<"lastname name of 2nd employee  : "<<b.getlastname()<<endl;
  cout<<"yealry salary of 2nd employee  :  "<<b.getsalary()<<endl;

   cout<<"after 10 percent raise:"<<endl;
   cout<<endl;
   cout<<"rasied yealry salary of 1st employee   :  "<<a.getraise10()<<endl;
   cout<<"rasied yearly salary of 2nd employee  :  "<<b.getraise10()<<endl;





  return 0;

}
