#include <iostream>
using namespace std;
int main()
{
    int x;
    int sum;
    cout << "Enter number:" ;
    cin >> x;
    cout << "Product =" << endl;
    for (int product = 1; product < x; product++)
    {
        if (x % product == 0)
            product *= sum;
         
            cout << product  << endl;
    }

}