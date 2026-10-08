#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

    public:
    
    void accept()
    {
        cout<<"Enter length of rectangle: ";
        cin>>length;
        cout<<"Enter breadth of rectangle: ";
        cin>>breadth;
    }

    float area();
    float perimeter();

    void display()
    {
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }
};
float Rectangle::area()
{
    return length*breadth;
}
float Rectangle::perimeter()
{
    return 2*(length+breadth);
}

int main()
{
    Rectangle r;
    r.accept();
    r.display();

    return 0;
}