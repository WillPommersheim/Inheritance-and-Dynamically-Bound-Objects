#include <string>
#include <cstdlib>
using namespace std;
#include "Employee.h"

Employee::Employee (string theName, double theWage, double theHours)
{
    name = theName;
    wage = theWage;
    hours = theHours;
}

double Employee::calcPay() const
{
    return wage * hours;
}

string Employee::getName() const
{
    return name;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Manager::Manager(std::string name, double wage, double hours, double bonus) : Employee(name, wage, hours), bonus(bonus)
{
                // bonus(bonus) initiliazes MV bonus with parameter bonus
}

double Manager::calcPay() const
{
    double x, sum;
    x = Employee::calcPay();
    sum = x + bonus;
    return sum;
}

/*
void Manager::setVariables (string name1, double wage1, double hours1, double bonus1)
{
    name = name1;
    wage = wage1;
    hours = hours1;
    bonus = bonus1;
}
*/







