#include <iostream>
using namespace std;

class Point {

	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x=x;
	}
	void set_y(double y)
	{
		this->y=y;
	}
	//    CONSTRUCTORS
	Point()
	{
		x = y = double();
		cout << "Default constructors:\t" << this << endl;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t" << this << endl;
	}
	// ////////     MHETODS
	void print()const
	{
		cout << x << "\t" << y << endl;
	}
};

void main() {
	setlocale(LC_ALL, "rus");
	Point A;
	//A.set_x(2);
	//A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	//int a;// ��������� ���������� "�" ���� "int"
	//Point A; // ��������� ���������� "�" ���� "Point"

	//A.x = 2;
	//A.y = 3;

	//cout << A.x << "\t" << A.y << endl;


	//Point* pA = &A; // ������� ��������� �� "Point" � �������������� ��� �������� ������ ������� "A"
	//cout << pA->x << "\t" << pA->y<< endl;
	//cout << (*pA).x << "\t" << (*pA).y<< endl;
}