#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mark;
    cout<<"Please enter your mark:";
    cin>>mark;
    if(mark>100)
    {
        cout<<"Invalid Mark!";
    }
    else if(mark<0)
    {
        cout<<"Invalid Mark!";
    }
    else if(mark>=80)
    {
        cout<<"A+!";
    }
    else if(mark>=70)
    {
        cout<<"A Grade!";
    }
    else if(mark>=65)
    {
        cout<<"A- Grade!";
    }
    else if(mark>=60)
    {
        cout<<"B Grade!";
    }
    else if(mark>=50)
    {
        cout<<"C Grade!";
    }
    else if(mark>=40)
    {
        cout<<"D Grade!";
    }
    else if(mark>=33)
    {
        cout<<"Pass!";
    }
    else
    {
        cout<<"Result Not Found!\n";
        cout<<"Better luck for next time.";
    }
    getch();

}
