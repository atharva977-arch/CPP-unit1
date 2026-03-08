#include <iostream>
using namespace std;

class Student
{
    int marks[5];
    float percentage;

public:

    void getMarks()
    {
        cout << "Enter marks of 5 subjects: ";
        for(int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void calculate()
    {
        int total = 0;

        for(int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = total / 5.0;
    }

    void display()
    {
        cout << "Percentage = " << percentage << "%" << endl;
    }
};

int main()
{
    Student s;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nStudent " << i << endl;
        s.getMarks();
        s.calculate();
        s.display();
    }

    return 0;
}