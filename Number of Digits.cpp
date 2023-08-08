#include<iostream>
using namespace std;
int NumDigits(int input_1)
{
    int count = 0;
    while (input_1 !=0)
    {
        input_1 = input_1 / 10;
        count++;
    }
    return count;
    
}
int main()
{
    int input_1;
    cout<<"Enter the number: "<<endl;
    cin>>input_1;
    cout<<"The number of digits are: "<<NumDigits(input_1)<<endl;

}
