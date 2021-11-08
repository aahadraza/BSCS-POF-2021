#include <iostream>
using namespace std;
int main() 
{
    int n1; 
	int n2; 
	int n3;
    cout <<"enter the value of n1:";
    cin>>n1; 
	cout<<"enter the value of n2:";
	cin>>n2; 
	cout<<"enter  the value of n3:";
	cin>>n3;

    if (n1 >= n2) 
	{
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else 
	{
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }

    return 0;
}
