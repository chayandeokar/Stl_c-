#include "iostream"

using namespace std;


template <typename T>
T lwsum(T x , T y)
{
	return x + y;
}



int main()
{

cout<<   lwsum<int>(2,4)   <<endl;
cout<<   lwsum<float>(2.2 , 4.7)  <<endl;

}
