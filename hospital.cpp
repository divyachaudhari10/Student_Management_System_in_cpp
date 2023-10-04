#include <iostream>
using namespace std;

class Child_hospital
{
    char patient_name[15], type[5];
    int patient_age;

public:
    Child_hospital()
    {
        cout << "\n Enter name: ";
        cin >> patient_name;
        cout << "\n Enter patient age: ";
        cin >> patient_age;
    }
    ~Child_hospital()
    {
        cout << "\n Destructor is called";
    }
};

int main()
{
    Child_hospital ch1;
    int ch;

    cout << "\n1. commoncold\n2. cough\n3. earinfection\n4. diarrhoea\n5. chickenpox";
    do
    {
        cout << "\n Enter choice 1 to 5: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\n Meet Dr. Ranjeet Sharma";
            break;
        case 2:
            cout << "\n Meet Dr. Vidhi Gupta";
            break;
        case 3:
            cout << "\n Meet Dr. Sameer Kaushik";
            break;
        case 4:
            cout << "\n Meet Dr. Suraj Patil";
            break;
        case 5:
            cout << "\n Meet Dr. Prakash Gupta";
            break;
        default:
            cout << "\n This type of illness is not treated here";

            // For demonstrating the destructor, creating another object
            cout << "\n For implementing the concept of Destructor, we are using the constructor again.";
            cout << "\n This means for exit, we have to enter patient details again.";
            Child_hospital ch2;
            break;
        }

    } while (ch <= 5);

    return 0;
}
