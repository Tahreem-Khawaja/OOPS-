#include<iostream>
using namespace std;
class Rectangle{
   private:
   	float length;
   	float width;
   	public:
   	//default constructor
   	Rectangle(){
   	length=1.0;
   	width=1.0;
   }
   //parametrized constructor
   Rectangle(float l, float w ){
   	length=l;
   	width=w;
   }
   Rectangle(float side)
   {
   	length=side;
   	width=side;
   }
   //method to calculate area
   float area()
   {
    return length*width;
   }
    // Display method
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};
int main(){
	//call default contructor
	Rectangle r1;
	//call parameterized constructor
	Rectangle r2(5.0,2.0);
	//call single constructor
	 Rectangle r3(4.0);
	cout << "Rectangle 1 (Default):" << endl;
    r1.display();

    cout << "Rectangle 2 (Length & Width):" << endl;
    r2.display();

    cout << "Rectangle 3 (Square):" << endl;
    r3.display();
    return 0;
}
   
   	
   
