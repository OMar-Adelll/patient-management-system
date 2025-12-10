// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
// Free Palestine
#include "HospitalSystem.h"
#include "SafeInput.h"

// ================= helper functions =================

// reading caseType
static CaseType readCaseType()
{
    cout << "Select Case Type:\n";
    cout << "  1) GENERAL\n";
    cout << "  2) EMERGENCY\n";
    cout << "  3) ICU\n";
    cout << "  4) PEDIATRIC\n";
    cout << "  5) SURGICAL\n";
    int c = safe_input_int(1, 5);
    switch (c)
    {
    case 1:
        return GENERAL;
    case 2:
        return EMERGENCY;
    case 3:
        return ICU;
    case 4:
        return PEDIATRIC;
    default:
        return SURGICAL;
    }
}
// this functions to read name with space like -> OMar Adel Youssif
static string readName()
{
    string s;
    std::getline(cin, s);
    if (s.size() == 0) 
        std::getline(cin, s);
    return s;
}

// ================= CONSTRUCTOR & DESTRUCTOR (Memory management) =================

HospitalSystem::HospitalSystem() // allocate memory (create list of doctors for each Major)
{
    doctorsByMajor[GENERAL] = new DoctorList();
    doctorsByMajor[EMERGENCY] = new DoctorList();
    doctorsByMajor[ICU] = new DoctorList();
    doctorsByMajor[PEDIATRIC] = new DoctorList();
    doctorsByMajor[SURGICAL] = new DoctorList();
}

HospitalSystem::~HospitalSystem() // save memory leak
{
    cout << "System shutting down... Cleaning up memory." << endl;
    for (auto const &[key, listPtr] : doctorsByMajor)
    {
        delete listPtr;
    }
}

// reading line like name of patient or doctor
static string readLineTrimmed()
{
    string s;
    std::getline(cin, s);
    if (s.size() == 0)
        std::getline(cin, s);
    return s;
}

// ================= PATIENT MANAGEMENT =================
void HospitalSystem::registerPatient()
{
}
void HospitalSystem::deletePatient() {}
void HospitalSystem::searchPatientByID() {}

// ================= DOCTOR MANAGEMENT =================
void HospitalSystem::hireDoctor() {}
void HospitalSystem::fireDoctor() {}
void HospitalSystem::searchDoctorByID() {}
void HospitalSystem::searchDoctorByDepartment() {}
void HospitalSystem::showDoctorQueue() {}

// ================= MAIN MENU & PATIENT MENU & DOCTOR MENU & closing =================

void HospitalSystem::printMainMenu() // welcome menu
{
    cout << "\n";
    cout << "+==================================================+\n";
    cout << "|                 HOSPITAL SYSTEM                  |\n";
    cout << "+==================================================+\n";
    cout << "|                                                  |\n";
    cout << "|   1) Patient Management                          |\n";
    cout << "|   2) Doctor Management                           |\n";
    cout << "|   3) Treat Patient                               |\n";
    cout << "|   5) doctors Count                               |\n";
    cout << "|   6) Patient Count                               |\n";
    cout << "|   7) display All doctors                         |\n";
    cout << "|   8) display All patients                        |\n";
    cout << "|                                                  |\n";
    cout << "|   0) Exit                                        |\n";
    cout << "|                                                  |\n";
    cout << "+==================================================+\n";
    cout << "Choose an option: ";
}
void HospitalSystem::printExitScreen() // exit menu
{
    cout << "\n";
    cout << "+==================================================+\n";
    cout << "|                                                  |\n";
    cout << "|        THANK YOU FOR USING THE SYSTEM!           |\n";
    cout << "|                                                  |\n";
    cout << "|              System shutting down...             |\n";
    cout << "|                                                  |\n";
    cout << "+==================================================+\n";
}

void HospitalSystem::patientManagement() // this menu to to manage patients
{
    int choice;

    while (true)
    {
        cout << "\n";
        cout << "+==================================================+\n";
        cout << "|              PATIENT MANAGEMENT MENU             |\n";
        cout << "+==================================================+\n";
        cout << "|                                                  |\n";
        cout << "|   1) Register Patient                            |\n";
        cout << "|   2) Delete Patient                              |\n";
        cout << "|   3) Search Patient by ID                        |\n";
        cout << "|                                                  |\n";
        cout << "|   0) Back to Main Menu                           |\n";
        cout << "|                                                  |\n";
        cout << "+==================================================+\n";
        cout << "Choose an option: ";

        choice = safe_input_int(0, 3); // safe input

        switch (choice)
        {
        case 1:
            registerPatient();
            break;

        case 2:
            deletePatient();
            break;

        case 3:
            searchPatientByID();
            break;

        case 0:
            return; // go back to main menu

        default:
            cout << "Invalid option. Try again.\n";
        }
    }
}

void HospitalSystem::doctorManagement() // this to manage doctor
{
    int choice;

    while (true)
    {
        cout << "\n";
        cout << "+==================================================+\n";
        cout << "|               DOCTOR MANAGEMENT MENU             |\n";
        cout << "+==================================================+\n";
        cout << "|                                                  |\n";
        cout << "|   1) Hire Doctor                                 |\n";
        cout << "|   2) Fire Doctor                                 |\n";
        cout << "|   3) Search Doctor by ID                         |\n";
        cout << "|   4) Search Doctor by Department                 |\n";
        cout << "|   5) Show Doctor's Patient Queue                 |\n";
        cout << "|                                                  |\n";
        cout << "|   0) Back to Main Menu                           |\n";
        cout << "|                                                  |\n";
        cout << "+==================================================+\n";
        cout << "Choose an option: ";

        choice = safe_input_int(0, 5);

        switch (choice)
        {
        case 1:
            hireDoctor();
            break;

        case 2:
            fireDoctor();
            break;

        case 3:
            searchDoctorByID();
            break;

        case 4:
            searchDoctorByDepartment();
            break;

        case 5:
            showDoctorQueue();
            break;

        case 0:
            return; // go back to main menu

        default:
            cout << "Invalid option. Try again.\n";
        }
    }
}

void HospitalSystem::run()
{
    int choice;

    while (true)
    {
        printMainMenu();
        choice = safe_input_int(0, 8);

        switch (choice)
        {
        case 1:
            patientManagement();
            break;

        case 2:
            doctorManagement();
            break;

        case 0:
            printExitScreen();
            return;

        default:
            cout << "Invalid option. Try again.\n";
        }
    }
}
