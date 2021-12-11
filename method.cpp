#include<iostream>
using namespace std;

class Employee
{
    public:
    int x,y;

    int add(int x,int y)
    {
        this->x=x;
        this->y=y;
        cout << "\nAddition is : " << x+y;
    }

    int sub(int x,int y)
    {
        this->x=x;
        this->y=y;
        cout << "\nSubstraction is : " << x-y;
    }

    int display()
    {
        cout << "\nAddition is : " << x+y << "  Substraction is : " << x-y;
    }
};

int main()
{
    Employee e1;
    e1.add(25,19);
    e1.sub(39,14);
    e1.display();
    Employee e2;
    e2.add(19,45);
    e2.sub(19,25);
    e2.display();
}