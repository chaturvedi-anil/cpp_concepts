#include <iostream>
using namespace std;

class Addition
{
public:
    void add(int n)
    {
        cout<<"1 time add function : "<<n+n<<endl;
    }
    void add(int n,int m)
    {
        cout<<"2 time add function : "<<n+m<<endl;
    }
    void add(float f)
    {
        cout<<"3 time add function : "<<f+f<<endl;
    }
};
int main()
{
    Addition a;
    a.add(5);
    a.add(2,3);
    a.add(2.5f);
    return 0;
}

