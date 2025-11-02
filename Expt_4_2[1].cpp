#include <iostream>
using namespace std;
class construct
{
public:
float area;
construct()
{
area=0;
}
construct(int a, int b)
{
area=a*b;
}
void disp()
{
cout<< area<< endl;
}
};
int main()
{
	
	    cout<<"Name:  Prathmesh Namdev Khorate\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 19\n\n";

construct o;
construct o2(10,20);
o.disp();
o2.disp();
return 1;
}

/*
O/P:

Name: Prathmesh Namdev KhorateDiv: B
Roll No: 19

0
200

*/
