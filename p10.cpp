#include <iostream>
using namespace std;
void hello()
{
    cout << "Hello THis is printing from call by reference " << endl;
};
int main()
{
    cout << "This print line is from main function" << endl;
    hello();
    return 0;
}