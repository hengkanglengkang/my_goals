#include <iostream>
#include <conio.h>
using namespace std;

class exercise
{
private:
  int firstNumber, secondNumber;
public:
  exercise(){
    cout<<"first number : ";cin>>firstNumber;
    cout<<"second number : ";cin>>seconNumber;
  }
  int summation(){
    cout<<firstNumber<<" + "<<secondNumber<<" = ";
    return firstNumber+secondNumber;
  }
}

int main()
{
  exercise first;
  first.summation();
  _getch();
  return 0;
}
