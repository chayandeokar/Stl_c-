#include "iostream"
#include "list"


using namespace std;


int main()
{

	list<int> r1;
	r1 = { 2,4,6,7,8,9,10 };

	// doubly LinkedList
	list<int>::iterator  i = r1.begin();

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
