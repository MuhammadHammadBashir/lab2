#include<iostream>
using namespace std;
class account{
public:
account(double initialbalance)
{
  balance=initialbalance;
}
void credit(double creditamount)
{
balance=balance+creditamount;
}
void debit(double debitamount)
{if(debitamount<balance)
{balance=balance-debitamount;}
else cout<<"not available";


}
double getbalance()
{

return balance;
}






private:
  double balance;
};
int main()
{
  account acct1(45);
  cout << "Account 1 Balance is : "<<acct1.getbalance()<<endl;
  acct1.credit(2323);
  cout << "Account 1 Balance after credit is : " <<acct1.getbalance()<<endl;
  acct1.debit(2000);
  cout << "Account 1 Balance after debit is : " <<acct1.getbalance()<<endl;

}
