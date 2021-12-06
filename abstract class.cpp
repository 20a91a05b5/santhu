#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area(int x)=0;
};
class square:public shapes
{
	public:
		void area(int x)
		{
			cout<<"area of square="<<x*x<<endl;
		}
};
class circle:public shapes
{
	public:
		void area(int x)
		{
			cout<<"area of circle="<<3.14*r*r;
		}
};
int main()
{
	square s,*sptr;
	sptr=&s;
	s->area(20);
	circle c,*cptr;
	cptr=&c;
	c->area(10);
}
