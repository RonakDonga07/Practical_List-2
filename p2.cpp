#include <iostream>
using namespace std;
class temp
{
public:
    static int a;
};
int temp::a = 10;
int main()
{
    int a = 20;
    cout << "Use of Scope Resolution Operator with class." << endl;
    cout << "Value stored in a using class is : " << temp::a << endl;
    cout << "Value stored in a using class is : " << a << endl;

    return 0;
}
