#include<iostream>
using namespace std;
int SumDigits(int input_2)
{
    int sum = 0 ;
    while (input_2 !=0)
    {
        sum = sum + input_2 % 10;
        input_2 = input_2 / 10;
    }
    return sum;
    
}
int main()
{
    int input_2;
    cout<<"Enter the number: "<<endl;
    cin>>input_2;
    cout<<"The sum of the digits is: "<<SumDigits(input_2)<<endl;
}
