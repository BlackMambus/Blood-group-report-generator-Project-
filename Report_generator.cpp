#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Structure to hold patient information
struct Patient {
    string name;
    int age;
    string gender;
    string bloodGroup;
    string contactNumber;
};

// Function to display the blood group report
void displayReport(const Patient& p) {
    cout << "\n========== BLOOD GROUP REPORT ==========\n";
    cout << left << setw(20) << "Name:" << p.name << endl;
    cout << left << setw(20) << "Age:" << p.age << endl;
    cout << left << setw(20) << "Gender:" << p.gender << endl;
    cout << left << setw(20) << "Blood Group:" << p.bloodGroup << endl;
    cout << left << setw(20) << "Contact Number:" << p.contactNumber << endl;
    cout << "========================================\n";
}

int main() {
    Patient p;

    // Input patient details
    cout << "Enter patient's name: ";
    getline(cin, p.name);

    cout << "Enter age: ";
    cin >> p.age;
    cin.ignore(); // Clear newline from buffer

    cout << "Enter gender (M/F/O): ";
    getline(cin, p.gender);

    cout << "Enter blood group (e.g., A+, O-, B+): ";
    getline(cin, p.bloodGroup);

    cout << "Enter contact number: ";
    getline(cin, p.contactNumber);

    // Display the report
    displayReport(p);

    return 0;
}




