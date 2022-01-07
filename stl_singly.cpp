#include "iostream"
#include "forward_list"


using namespace std;


int main()
{

	forward_list<int> r1;
	r1 = { 2,4,6,7,8,9,10 };

	//singly LinkedList
	forward_list<int>::iterator  i = r1.begin();

	cout<<*i<<endl;

	i = next(i);
	cout<<*i<<endl;
	i = next(i);
	cout<<*i<<endl;
	i = next(i);
	cout<<*i<<endl;

	i = prev(i);
	cout<<*i<<endl;
}
