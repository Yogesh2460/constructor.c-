#include<iostream>
using namespace std;
class Sample
{
private:
    int a;
    
public :
    Sample()
    {
		cout<<"default constructor"<<endl;
	}
    Sample(int x) 
	{
	cout<<"parameterised constructor"<<endl;
	a=x;
cout<<a<<endl;
	}
    Sample(Sample &b) 
	{
    cout<<"copy constructor"<<endl;
a=b.a;
cout<<a<<endl;
	}
	~ Sample()
	{
	cout<<"destructor"<<endl;
	}
    
};
int main()
{
	Sample o1;
	Sample o2(23);
	Sample o3(o2);

	return 0;
}
