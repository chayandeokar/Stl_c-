#include "iostream"

using namespace std;


template<typename T>
class Student
{
	private:
		T id;
		T phone;
	public:
		void setPhone(T p)
		{
			phone = p;
		}

		T getPhone()
		{
			return phone;
		}

};


int main()
{

Student<int> r1;
Student<float> r2;



r1.setPhone(1111);
cout<<r1.getPhone()<<endl;

}
