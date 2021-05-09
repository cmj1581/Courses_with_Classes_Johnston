#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}

/*- First I would establish a parent class for training courses, this would include members for the block of hours sets of courses would have, their price, and some other basic information that would apply to any of the courses such as meeting room numbers and expected meeting times. These course classes would also have a vector for how many students they can have in one class, this vector would be populated with the registration numbers of students as detailed later.

-Next I would write a few constructor functions for these data members, as well as setters and getters.

-Then I would create some classes that would inherit from the base training course class, these would be ones that vary from the normal courses, for instance if the company was an arts company I would create different classes for computer based art as well as physically based art courses. Here they would inherit the basic members of all courses, but also have more specific ones such as programs used in a computer based class and what sort of physical mediums the others would have, these classes would also include members for required materials if needed.

-Next I would create a different class, this would be for the people wanting to register for the program, this class would just have basic information about the person, their name and age, as well as a unique registration number for each person enrolling in courses would be generated and applied to each person.

- I would then create a function to generate a user menu, first this menu would ask the user to create a new profile in which they would fill out the student class from just before. Then the menu would display a table of the categories of classes that the company offers. Once a category is chosen it would display a unique menu function for that category of courses which displays the inherited course classes that still have space available in their vector's of student registration numbers. Once a student selects a course they'd like to enroll in the program will display any important information about the course, such as the instructor name and meeting times. After the student confirms the program should do another check just to make sure they haven't been beaten to a seat and if they confirm the registration the course will put that student's registration number in it's vector and they would be returned to the menu for other courses.

-The program loops until the student clicks or types "done".*/