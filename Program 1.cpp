//Bao Trang
//CMPS 1043-01: Computer Science 1
//Professor Benjamin Shelton
//This program will ask users for some personal information and output them
#include <iostream>
#include <string> //string object require string header file/ module

using namespace std;

int main() 
{
  string name;
  char MI[5], blood[5]; //in case users input more than 1 character
  int date, month;

  cout<<"What is your name? \n";
  getline(cin, name);
  
  cout<<"What is your middle initial? \n";
  cin>>MI;

  cout<<"What day is your birthday? (as a number) \n";
  cin>> date;

  cout<<"What is your birthday month? (as a number) \n";
  cin >> month;

  cout<<"What is your blood type? \n";
  cin >> blood;
  
  //will output all user's information
  cout<<"Name: " <<name <<endl;
  cout<<"Middle Initial: " <<MI <<endl;
  cout<<"Birthday: " <<date <<"/" <<month <<endl;
  cout<<"Blood Type: " <<blood;
  
  return 0;
}