#include <iostream>
using namespace std;

int main()
{
//Calculating tax payable and net salary

int Basic = 10000;
float PAYE = 0.25;

int taxPay = PAYE * Basic;
int netSalary = Basic - taxPay;

cout << "Tax Payable: " << taxPay << endl;
cout << "Net Salary: " << netSalary << endl;

return 0;

}