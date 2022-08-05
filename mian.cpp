// •	C++ Program to maintain employee database using virtual class

#include <iostream>
using namespace std;

class employee
{
protected:
    char name[20];
    int empid;

public:
    void setData()
    {
        cout << "Enter the Name of Employee : ";
        cin >> name;

        cout << "Enter the Employee id : ";
        cin >> empid;
    }

    void getData()
    {
        cout << "Name : " << name << endl;
        cout << "Employee ID : " << empid << endl;
    }
};

class salary : virtual public employee
{

protected:
    int pay;

public:
    void setSalary()
    {
        cout << "Enter the Salary : ";
        cin >> pay;
    }

    void getSalary()
    {
        cout << "Salary : " << pay << endl;
    }
};

class admin : virtual public employee
{
protected:
    int experience;

public:
    void setexp()
    {
        cout << "Enter Experience : ";
        cin >> experience;
    }

    void getexp()
    {
        cout << "Experience : " << endl;
    }
};

class master : public salary, public admin
{

    int choice;

public:
    void set_data()
    {
        cout << "---SETTING UP INFORMATION---" << endl;
        setData();
        setSalary();
        setexp();
    }
    void print_data()
    {
        cout << "--- GETTING INFORMATION---" << endl;
        getData();
        getSalary();
        getexp();
    }

    void update()
    {
        cout << "What do you want to Update ? " << endl;

        cout << "1.Name" << endl;
        cout << "2.Employee ID" << endl;
        cout << "3.Experience" << endl;
        cout << "4.Salary" << endl;

        cout << "Enter :: ";
        cin >> choice;

        switch (choice)
        {
        case (1):
        {
            cout << "Enter Name :: ";
            cin >> name;
        }
        break;

        case (2):
        {
            cout << "Enter Employee ID :: ";
            cin >> empid;
        }
        break;

        case (3):
        {
            cout << "Enter Experience :: ";
            cin >> experience;
        }
        break;

        case (4):
        {

            cout << "Enter Salary :: ";
            cin >> pay;
        }
        break;

        default:
            cout << "Invalid choice.";
        }
    }
};

int main()
{

    master m1;

    int choice;
    while (1)
    {
        cout << "\n\n=====EMPLOYE DATABASE=====\n\n";
        cout << "\nChoose Operation you want to perform\n";
        cout << "1)  Create  Record\n";
        cout << "2)  Display Record\n";
        cout << "3)  Update  Record\n";
        cout << "4)  Exit\n";
        cout << "\nEnter your choice:- ";
        cin >> choice;
        switch (choice)
        {
        case (1):
        {
            m1.set_data();
        }
        break;

         case (2):
        {
            m1.print_data();
        }
        break;

        case (3):
        {
            m1.update();
        }
        break;

        case (4):
        {
            cout << "GoodBye!" << endl;
            return (0);
        }
        break;

        default:
            cout << "Invalid Choice! \n Try Again";
        }
    }
    return (0);
}