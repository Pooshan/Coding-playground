
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
//using std::cout;

int main()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    int ageAtleatExam = 16;
    bool isNotIntoxicated = true;
    
    if ((age >=1) && (age < 16))
    {
        cout << "You can't drive" << endl;
    }
    else if (! isNotIntoxicated)
    {
        cout << "You can't drive" << endl;
    }
    else if ((age >=80) && ((age > 100) || (age - ageAtleatExam) > 5))
    {
        cout << "You can't drive" <<endl;
    }
    else
    {
        cout << "Yay!, You can drive" << endl;
    }
    
    return 0;
}



