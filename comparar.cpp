#include <iostream>
using namespace std;
int main() {
    int n1 = 0,n4 = 0,p = 0,n3 = 0,n2 = 0;
    cout<<"ingrese el primer valor: ";
    cin>>n1;
    cout<<"ingrese el segundo valor: ";
    cin>>n2;
    cout<<"ingrese el tercer valor: ";
    cin>>n3;
    cout<<"ingrese el cuarto valor: ";
    cin>>n4;
 
    if (n1 < n2) 
	{
        p = n2;
        n2 = n1;
        n1 = p;
    }
 
    if (n1 < n3) 
	{
        p = n3;
        n3 = n1 ;
        n1 = p;
    }
 
    if (n2 < n3)
	{
        p = n3;
        n3 = n2 ;
        n2 = p;
    }
    if (n1 < n4) 
	{
        p = n4;
        n4 = n1;
        n1 = p;
    }
    if (n2 < n4) 
	{
    	p = n4;
    	n4 = n2;
    	n2 = p;
    }
    if (n3 <n4) {
        p = n4;
        n4 = n3;
        n3 = p;
    }
    cout <<n1<<endl;
    cout <<n2<<endl;
    cout <<n3<<endl;
    cout <<n4<<endl;
 
    return 0;
}
