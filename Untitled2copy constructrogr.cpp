#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    A(int x, int y)//parametrise constructor
    {
        a=x;
        b=y;

    }
    A(A &c)//copy constructor
    {

        a=c.a;
        b=c.b;
        cout<<"\na=\n"<<a<<"  "  <<"\nb=\n"<<b;
    }
    void show()//fuction creat
    {
        cout<<"\na=\n"<<a<<"  " <<"\nb=\n"<<b<<endl;

    }
};
int main()
{
    A obj(10,20);
    A obj1=obj;
    obj.show();

    return 0;

}
