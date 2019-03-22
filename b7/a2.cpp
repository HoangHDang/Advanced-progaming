#include <iostream>
using namespace std;
void f1(int a[])
{
    cout<<sizeof(a);

}
void f2(int a[10])
{
    cout<<sizeof(a);
}
int main()
{
    int a[100];
cout<<sizeof(a);
f1(a);
f2(a);

}
