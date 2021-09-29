#include <iostream>

using namespace std;

int main()
{ cout <<" *** CALCULATE FACTORIAL *** \n";
  int num,i,factor=1;

  cout << "ENTER NUMBER  ";
  cin >> num;


  for(i=num;i>0;i--)                                //For positive numbers
  {
      factor = ( factor * i );

  }
  for(i=num;i<0;i++)                                //For negative numbers
  {
      factor = ( factor * i );

  }
  if(num==0)                                         //   For 0!=1
  cout << "factorial is 1 \n";

    else
        cout <<num << "! = "<< factor<<endl;


    // now , to count the digits

    int counter=0;

    while(factor%10!=0 || factor/10!=0)
    {
        factor=factor/10;                               //to decrease the no. as 546 becomes 54
        counter++;                                          // then count+1
    }
    cout << "no. of digits = "<<counter;

    return 0;
}
