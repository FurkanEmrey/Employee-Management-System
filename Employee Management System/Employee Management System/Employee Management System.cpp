#include<iostream>
#include<string>
using namespace std;

// Code about employee tracking system
// private variables: Employee ID number, salary
// public variables: position, name and surname

class employee {
private:
	int idNumber;
	float salary;
public:
	string name;
	string secName;
	string position;

	// setter and getter functions

	void setIdNumber(int idNum) {
		idNumber = idNum;
	}

	void setSalary(float pay) {
		salary = pay;
	}

	int getIdNumber() {
		return idNumber;
	}

	float getSalary() {
		return salary;
	}

	// listing function associated with the class

	void list() {

		cout << "Employee's Name: " << name << endl;
		cout << "Employee's Second Name: " << secName << endl;
		cout << "Employee's Position: " << position << endl;
		cout << "Employee's ID Number: " << idNumber << endl;
		cout << "Employee's Salary: " << salary << endl;
	}


};

int signUp(employee series[], int numOfEmp, employee e1) {
	series[numOfEmp].name = e1.name;
	series[numOfEmp].secName = e1.secName;
	series[numOfEmp].position = e1.position;
	series[numOfEmp].setIdNumber(e1.getIdNumber());
	series[numOfEmp].setSalary(e1.getSalary());

	numOfEmp++;
	return numOfEmp;
}

int fireEmp(employee series[], int numOfEmp, int empID) {
	for (int i = 0; i < numOfEmp; i++) {
		if (series[i].getIdNumber() == empID) {
			for (int j = 0; j < numOfEmp; j++) {
				series[j] = series[j + 1];
			}
			numOfEmp--;
			system("cls");
			cout << "The Employee Fired Successfully" << endl;
			cout << "*************************************************************" << endl;

		}
	}

	cout << "Employee with the given ID not found" << endl;
	return numOfEmp;
}


int main() {
	int choice = 0;
	const int MaxEmployees = 100;
	employee series[MaxEmployees];
	int numOfEmp = 0;

	do {
		cout << "1) Register an employee" << endl;
		cout << "2) List employees" << endl;
		cout << "3-) Fire an employee" << endl;
		cout << "4) Exit" << endl;
		cout << "Make a choice" << endl;
		cin >> choice;

		if (choice == 1) {

			// Register

			employee e1;
			int numofId;
			float pay;
			cout << "------------------------------------------" << endl;

			cout << "Please enter the employee's name: " << endl;
			cin >> e1.name;
			cout << "Please enter the employee's surname: " << endl;
			cin >> e1.secName;
			cout << "Please enter the employee's position: " << endl;
			cin >> e1.position;
			cout << "Please enter the employee's ID number: " << endl;
			cin >> numofId;
			cout << "Please enter the employee's salary: " << endl;
			cin >> pay;

			e1.setIdNumber(numofId);
			e1.setSalary(pay);

			numOfEmp = signUp(series, numOfEmp, e1);
			system("cls");
			cout << "The Employee Registered Successfully!! <3" << endl;


		}
		else if (choice == 2) {

			// list  employees
			for (int i = 0; i < numOfEmp; i++) {
				cout << "------------------------------------------" << endl;
				series[i].list();
				cout << "------------------------------------------" << endl;
			}
		}
		else if (choice == 3) {

			// firing an employee 

			int idOfEmp;
			cout << "Which Employee Do You Want To Fire ? " << endl;
			cout << "Please Enter the Employee's ID Number. " << endl;
			cin >> idOfEmp;
			numOfEmp = fireEmp(series, numOfEmp, idOfEmp);



		}
		else {
			cout << "Ending..." << endl;
		}

	} while (choice != 4);

	return 0;
}
