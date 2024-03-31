#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee
{
    protected:
        std::string name;
        double wage;
        double hours;
    public:
                                // Create a new employee
        Employee (std::string theName, double theWage, double theHours);
                                // Calculate the employee’s pay.
        double calcPay() const;
        std::string getName () const;
};


class Manager: public Employee
{
    private:
        double bonus;
    public:
        Manager(std::string name, double wage, double hours, double bonus);
        double calcPay() const;
       // void setVariables (std::string, double, double, double);
        
};
#endif // EMPLOYEE_H