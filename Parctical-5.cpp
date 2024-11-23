#include <iostream>
using namespace std;
class Hospital {
    private:
        char hospitalName[50];
        char address[100];
    public:
        void getHospitalInfo() {
            cout << "Enter Hospital Name: ";
            cin >> hospitalName;
            cout << "Enter Hospital Address: ";
            cin >> address;
        }
        void showHospitalInfo() {
            cout << "\nHospital Name: " << hospitalName;
            cout << "\nHospital Address: " << address;
        }
};


class Doctor : public Hospital {
    private:
        char doctorName[50];
        char degree[50];
    public:
        void getDoctorInfo() {
            getHospitalInfo();  
            cout << "Enter Doctor's Name: ";
            cin >> doctorName;
            cout << "Enter Doctorate Degree: ";
            cin >> degree;
        }
        void showDoctorInfo() {
            showHospitalInfo();  
            cout << "\nDoctor's Name: " << doctorName;
            cout << "\nDoctorate Degree: " << degree;
        }
};


class Patient : public Hospital {
    private:
        char patientName[20];
        char bedNumber[20];
    public:
        void getPatientInfo() {
            cout << "\nEnter Patient's Name: ";
            cin >> patientName;
            cout << "Enter Bed Number: ";
            cin >> bedNumber;
        }
        void showPatientInfo() {
            cout << "\nPatient's Name: " << patientName;
            cout << "\nBed Number: " << bedNumber;
        }
};


class Department : public Hospital {
    private:
        char ward[50];
    public:
        void getWardInfo() {
            cout << "\nEnter Ward Name: ";
            cin >> ward;
        }
        void showWardInfo() {
            cout << "\nWard Name: " << ward;
        }
};

class Amount : public Doctor, public Patient, public Department {
    private:
        int dues;
    public:
        void enterData() {
            getDoctorInfo();  
            getPatientInfo();    
            getWardInfo();        
            cout << "Enter Patient's Dues: ";
            cin >> dues;
        }
        void displayData() {
            showDoctorInfo();    
            showPatientInfo();   
            showWardInfo();       
            cout << "\nTotal Dues: " << dues;
        }
};

int main() {
    Amount a1;

    cout << "Enter Data\n";
    a1.enterData();
    
    cout << "\nInserted Data is:\n";
    a1.displayData();
    
    return 0;
}
