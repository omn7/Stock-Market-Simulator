 #include<iostream>
using namespace std;
int main()
{
    
  int choice;
  int x=0;
  int days;
  int amount=0;
  int cash=1000;
  cout<<"How many days will you be risking your fortune?"<<endl;
  cin>>days;
  cout<<"--------------------------------------------------------------------------------------------------"<<endl;
  while(days!=x)
  {
    int price=rand()%1001;
    cout<<"Stock Price: "<<price<<endl<<"Cash: "<<cash<<endl<<"Stocks Owned: "<<amount<<endl<<"Days Remaining: "<<days-x<<endl;
    cout<<"What do you want to do? 1 to buy stocks, 2 to sell stocks, 3 to skip a day."<<endl;
    cin>>choice;
    if(choice==1)
    {
      amount=amount+(cash/price);
      cash=cash%price;
      x=x+1;
      cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    }
    if(choice==2)
    {
      cash=cash+(amount*price);
      amount=0;
      x=x+1;
      cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    }
    if(choice==3)
    {
      x=x+1;
      cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    }
  }
  cout<<"You made "<<cash<<"$ in "<<days<<" days."<<endl;
  cout<<"Score: "<<cash/days<<endl;
  return 0;
}
