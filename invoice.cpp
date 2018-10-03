#include<iostream>
#include<string>
using namespace std;
class invoice{
public:
  invoice(){
    partnumber="Abc123";
    partdescription="ready to use";
    quantity=0;
    priceperitem=10;
  }
void setpartnumber(string partnumber_main){
  partnumber=partnumber_main;

}
void setpartdescription(string partdescription_main)

{
partdescription=partdescription_main;
}
void setquantity(int quantity_main)
{ if(quantity_main<0)
  {
    quantity=0;
  }else
  quantity=quantity_main;
}
void setpriceperitem(double priceperitem_main)
{if(priceperitem_main<0)
  {
    priceperitem=0.0;
  }else
  priceperitem=priceperitem_main;
}string getpartnumber(){
  return partnumber;
}
string getpartdescription()
{
  return partdescription;
}
int getquantity()
{
  return quantity;
}
double getpriceperitem()
{
  return priceperitem;
}
double getinvoiceamount()
{
  return quantity*priceperitem;
}


private:
  string partnumber;
  string partdescription;
  int quantity;
  double priceperitem;


};
int main()
{
  invoice n1;
  n1.setpartnumber("namal123");
  n1.setpartdescription("check before use");
  n1.setquantity(15);
  n1.setpriceperitem(10);
  cout<<"part number is : "<<n1.getpartnumber()<<endl;
  cout<<"part descritpion is : "<<n1.getpartdescription()<<endl;
  cout<<"number of item is : "<<n1.getquantity()<<endl;
  cout<<"price of item is : "<<n1.getpriceperitem()<<endl;
  cout<<"your total bill is : "<<endl<<n1.getinvoiceamount();
}
