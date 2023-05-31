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
    Student mn;
    mn.marks = INT_MAX;
    Student mx;
    mn.marks = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        getchar();
        // cin.ignore();
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[i].marks > mn.marks)
        {
            mn = arr[i];
        }
        if (arr[i].marks < mx.marks)
        {
            mx = arr[i];
        }
    }
    cout << "Maximum Marks : " << mx.name << " " << mx.roll << " " << mx.marks << endl;
    cout << "Minimum Marks : " << mn.name << " " << mn.roll << " " << mn.marks << endl;

    return 0;
}