#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    // Student(string name, int roll, int marks)
    // {
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }

    // Array of objects nile constructor newa jabe nah.
};
int main()
{
    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        getchar();
        // cin.ignore();
    }
    for (int i = 0; i < 3; i++)
    {

        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}