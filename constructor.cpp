#include<iostream>
using namespace std;

class Point{
	int x,y;
	public:
	Point (int a, int b){
		x = a;
		y = b;
	}
	~Point (int a, int b){
		cout << "Destructor is called";
	{
	void display(){
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main(){
	Point p1(1,1);   
	Point p2(2,5);
	cout << "\nPoint P1 = ";
	p1.display();
	cout << "\nPoint P2 = ";
	p2.display();
	return 0;
}
