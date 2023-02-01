#include <iostream>
using namespace std;

class impAb {
private:
	int a, b;

public:
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	impAb obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}


