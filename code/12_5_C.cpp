#include <bits/stdc++.h>
using namespace std;

class GradeCount
{
public:
    vector<int> grades;
    void readGrade()
    {
        int grade;
        cout << "Please enter a grade between 0 to 100 or -1 to quit: ";
        cin >> grade;

        while (grade != -1)
        {
            if (grade >= 0 && grade <= 100)
            {
                grades.push_back(grade);
                cout << "Grade entered successfully." << endl;
            }
            else
            {
                cout << "Invalid grade. Please enter a grade between 0 to 100." << endl;
            }
            cout << "Please enter a grade between 0 to 100 or -1 to quit: ";
            cin >> grade;
        }
    }

    void calculateGrade()
    {
        int totalGrades = grades.size();
        int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

        for (int grade : grades)
        {
            if (grade >= 90 && grade <= 100)
            {
                countA++;
            }
            else if (grade >= 80 && grade <= 89)
            {
                countB++;
            }
            else if (grade >= 70 && grade <= 79)
            {
                countC++;
            }
            else if (grade >= 60 && grade <= 69)
            {
                countD++;
            }
            else
            {
                countF++;
            }
        }
        cout << "Total number of grades entered: " << totalGrades << endl;
        cout << "Number of A grades: " << countA << endl;
        cout << "Number of B grades: " << countB << endl;
        cout << "Number of C grades: " << countC << endl;
        cout << "Number of D grades: " << countD << endl;
        cout << "Number of F grades: " << countF << endl;
    }
    void displayGrade()
    {
        cout << "List of A grades:" << endl;
        for (int grade : grades)
        {
            if (grade >= 90 && grade <= 100)
            {
                cout << grade << endl;
            }
        }
    }
};
int main()
{
    GradeCount gc;
    gc.readGrade();
    gc.calculateGrade();
    gc.displayGrade();
    return 0;
}