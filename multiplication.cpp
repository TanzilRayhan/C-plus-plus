#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    for (int i=1;i<=10;i++)
        {
            cout<<num<<"x"<<i<<"="<<(num*i)<<endl;

        }
    getch();
}
