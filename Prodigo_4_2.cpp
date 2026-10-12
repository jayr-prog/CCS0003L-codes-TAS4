#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

string money(double amount) {
    ostringstream out;
    out << fixed << setprecision(2) << "(" << amount << ")";
    return out.str();
}

int main() {
    string period, id, name;
    double salary, lateMinutes;

    cout << "Enter payroll period: ";
    getline(cin, period);
    cout << "Enter employee ID: ";
    getline(cin, id);
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter monthly salary: ";
    cin >> salary;
    cout << "Enter lates and absences (in minutes): ";
    cin >> lateMinutes;

    double hourlyRate = salary / 30 / 8;
    double lateAmount = (lateMinutes / 60) * hourlyRate;
    double philhealth = 1000;
    double pagibig = 800;
    double sss = 1200;
    double tax = salary * 0.12;

    double totalEarnings = salary;
    double totalDeductions = lateAmount + philhealth + pagibig + sss + tax;
    double netPay = totalEarnings - totalDeductions;

    const int leftW = 42;
    const int labelW = 20;
    const int amtW = 12;

    cout << endl;
    cout << "FEU - Institute of Technology" << endl << endl;

    cout << left << setw(leftW) << ("Employee ID: " + id)
         << "Payroll Period: " << period << endl;
    cout << "Employee Name: " << name << endl << endl;

    cout << left << setw(leftW) << "INCOME" << "DEDUCTIONS" << endl;

    cout << fixed << setprecision(2);

    ostringstream salaryLine;
    salaryLine << fixed << setprecision(2) << "Monthly Salary Php" << salary;

    cout << left << setw(leftW) << salaryLine.str()
         << setw(labelW) << "Lates and absences" << right << setw(amtW) << money(lateAmount) << endl;
    cout << left << setw(leftW) << ""
         << setw(labelW) << "Philhealth" << right << setw(amtW) << money(philhealth) << endl;
    cout << left << setw(leftW) << ""
         << setw(labelW) << "Pag-ibig" << right << setw(amtW) << money(pagibig) << endl;
    cout << left << setw(leftW) << ""
         << setw(labelW) << "SSS" << right << setw(amtW) << money(sss) << endl;
    cout << left << setw(leftW) << ""
         << setw(labelW) << "Withholding tax" << right << setw(amtW) << money(tax) << endl;

    cout << endl;
    cout << left << "Total Earnings: Php" << totalEarnings << endl;
    cout << "Total Deductions: Php " << totalDeductions << endl;
    cout << "Net Pay: " << defaultfloat << setprecision(10) << netPay << endl;

    return 0;
}
