#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void printMenu1();


  class course {
    private:
    string teacher;
    vector<int> courseSpace;
    string courseName;

    public:
    course() : courseSpace() { teacher = "Default Teacher Name"; };
    void setTeacher(string t) { teacher = t; }
    string getTeacher() { return teacher; }
    void addStudent(int r) { courseSpace.push_back(r); }
    void setName(string n) { courseName = n; }
    string getName() { return courseName; }
    
  };
  

  class student {
    private:
    string studentName;
    int regNum;

    public:
    
    void setName(string n) { studentName = n; }
    string getName() { return studentName; }
    void setReg(int r) { regNum = r; }
    int getReg() { return regNum; }
  };


int main() {
  int n;
  int j;
  string m;
  string name;

  course Drawing;
  Drawing.setTeacher("Jane");
  Drawing.setName("Drawing");
  
  course PublicSpeaking;
  PublicSpeaking.setTeacher("John");
  PublicSpeaking.setName("Public Speaking");

    cout << "Hello, please register your name" << endl;
    cin >> m;
    student newStudent;
    newStudent.setName(m);
    j++;
    newStudent.setReg(j);
    cout << "Here are our available courses" << endl;

  cout << "Course Title: " << "  |   Instructor Name: " << endl;
    cout << Drawing.getName() << setw(13) << "|   " << Drawing.getTeacher() << endl;
    cout << PublicSpeaking.getName();
    cout << " |   " << PublicSpeaking.getTeacher();
    cout << endl << "Please select a course by typing the course name" << endl;
    cin >> name;
    if (name == Drawing.getName()) {
      n = newStudent.getReg();
      Drawing.addStudent(n);
    }
    else if (name == PublicSpeaking.getName()) {
      n = newStudent.getReg();
      PublicSpeaking.addStudent(n);
    }




}




/*- First I would establish a parent class for training courses, this would include  basic information that would apply to any of the courses. These course classes would also have a vector for how many students they can have in one class, this vector would be populated with the registration numbers of students as detailed later.

-Next I would write a few constructor functions for these data members, as well as setters and getters.

-Next I would create a different class, this would be for the people wanting to register for the program, this class would just have basic information about the person, their name, as well as a unique registration number for each person enrolling in courses would be generated and applied to each person.

- I would then create a function to generate a user menu, first this menu would ask the user to create a new profile in which they would fill out the student class from just before. Once a student selects a course they'd like to enroll in the program will add that student's registration number to the course class's vector*/

