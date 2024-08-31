#include<iostream>
using namespace std;
float convertGradeToPoint(string grade){
    if(grade=="A"||grade=="A+")return 4.0;
     else if (grade == "A-") return 3.7;
    else if (grade == "B+") return 3.3;
    else if (grade == "B") return 3.0;
    else if (grade == "B-") return 2.7;
    else if (grade == "C+") return 2.3;
    else if (grade == "C") return 2.0;
    else if (grade == "C-") return 1.7;
    else if (grade == "D+") return 1.3;
    else if (grade == "D") return 1.0;
    else if (grade == "F") return 0.0;
    else {
        cout << "Invalid grade entered. Please enter a valid grade (e.g., A, B+, C)." << endl;
        return -1;
    }
}
int main(){
int courses;
cout<<"How many courses did you take ? ";
cin>>courses;
int credit_hours[100];
string grade[100];
float TotalGradePoints=0.0;
int TotalCredits=0;
for (int i=0; i<courses; i++){
    cout<<"Enter credit hour for course "<<i+1<<" : ";
    cin>>credit_hours[i];
    cout<<"Enter Grade for course "<<i+1<<" : ";
    cin>>grade[i];
    float gradePoint=convertGradeToPoint(grade[i]);
    if (gradePoint == -1) {
            i--; 
            continue;
        }
        TotalGradePoints+=gradePoint*credit_hours[i];
        TotalCredits+=credit_hours[i];
        }
         float GPA = TotalGradePoints / TotalCredits;
         cout << "Your GPA for this semester is: " << GPA << endl;
         float CGPA = GPA;
         cout << "Your CGPA is: " << CGPA << endl;
return 0;
}
