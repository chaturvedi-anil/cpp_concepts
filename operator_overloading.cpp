#include <iostream>
using namespace std;

class Operator_overlaoding
{
public:
    int a;
    Operator_overlaoding(int n)
    {
        a=n;
    }
    Operator_overlaoding operator - (Operator_overlaoding &obj)
    {
        int result;
        result=obj.a+obj.a;
        return result;
    }
    void print()
    {
        cout<<"change the meaning of - operator as + operator = "<<a<<endl;
    }
};
int main()
{
    Operator_overlaoding op(4);
    Operator_overlaoding opp=op-op;
    opp.print();
    return 0;
}

