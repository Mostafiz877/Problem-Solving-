#include<iostream>
using namespace std;

class check
{
public:
    int value;
    check()
    {
        cout<<"Constructor"<<endl;

    }

        ~check()
    {
        cout<<value<<endl;
        cout<<"Destructor"<<endl;

    }
};
int main()
{
    check ob1,ob2;
    ob1.value=100;
    ob2.value=200;

    return 0;
}
