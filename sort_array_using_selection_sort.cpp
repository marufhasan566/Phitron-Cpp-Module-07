// Maruf
// 22
// 90
// Hasan
// 23
// 95
// Kona
// 25
// 99

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
        for (int j = 0; j < 3; j++)
        {
            if (arr[i].marks > arr[j].marks)
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}