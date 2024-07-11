//                               TASK 2
//                           SIMPLE CALCULATOR

#include<iostream>
using namespace std;
int main()
{
int num1,num2;  //This will store the value given by the user
char operation;  // This will store the operation user want to perform
int i = 1;
cout<<"Hey I am a Calculator, you can perform operations ( + , - , * , / )\n"<<endl;
while(i==1)
{
cout<<"Enter first number , operation to perform and second number\n"<<endl;
cin>>num1>>operation>>num2;
cout<<"Here's your solution\n";

switch(operation)
{
    case '+':
    cout<<num1<<" + "<<num2<<" = "<<num1+num2;
    break;

    case '-':
    cout<<num1<<" - "<<num2<<" = "<<num1-num2;
    break;

    case '*':
    cout<<num1<<" * "<<num2<<" = "<<num1*num2;
    break;

    case '/':
    cout<<num1<<" / "<<num2<<" = "<<num1/num2;
    break;
}
cout<<"\n\nDo you want to continue 1 for Yes and 0 for No"<<endl;
cin>>i;
}
cout<<"Exiting.....";

}
