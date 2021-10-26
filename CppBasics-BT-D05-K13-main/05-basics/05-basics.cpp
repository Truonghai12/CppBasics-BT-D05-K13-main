// 05-basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()

{
    std::cout << "Enter number of students: ";
    short number; // so luong sv
    cin >> number;
    cin.ignore(1000, '\n');

    string name[50];
    short age[50];
    string mclass[50];

    double math[50], physical[50], english[50], avg[50];

    for (int i = 0; i < number; ++i) {

        cout << " Enter name of students " << i + 1 << " : ";
        cin.ignore(1000, '\n');
        getline(cin, name[i]);

        cout << "Enter age: ";
        cin >> age[i];

        cin.ignore(1000, '\n');

        cout << "Enter mclass: ";
        cin >> mclass[i];
        getline(cin, mclass[i]);

        /*cout << name[i] << '\n';
        cout << name[i] << '\n';
        cout << name[i] << '\n';*/
        cout << "Enter marks: ";
        cin >> math[i] >> physical[i] >> english[i];

        avg[i] = (math[i] + physical[i] + english[i]) / 3;

        cin.ignore(1000, '\n');
    }

    for (int i = 0; i < number; ++i) {
        cout << "students" << i + 1 << ": " << name[i] << '\n';
        cout << "math: " << math[i] << '\n';
        cout << "physical: " << physical[i] << '\n';
        cout << "english: " << english[i] << '\n';
        cout << "avg: " << avg[i] << '\n';
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
