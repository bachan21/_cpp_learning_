// Learning C++ 
// Use setw for setting the output width

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Template.h"

int main(void){
  std::vector<Student> Student_list;
	std::vector<Course>  Course_list;

	Student_list.push_back(Student("Benny", 101));
	Student_list.push_back(Student("Jose",102));
	Student_list.push_back(Student("Leena", 103));

	Course_list.push_back(Course("Mathematics", 501, 3));
	Course_list.push_back(Course("Semiconductor Physics", 502, 5));
	Course_list.push_back(Course("VLSI Design", 503, 5));

	//Pointer shouldn't point to an empty Vector
	//std::vector<Student>::iterator ptr = Student_list.begin();

	std::cout << "Total no. of students = " << Student_list.size() << std::endl <<std::endl;
	std::cout << std::left << std::setw(40) << "Student" << "SID" << std::endl;
	std::cout << std::left << std::setw(45) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

	
	for (auto ptr : Student_list)
		std::cout << std::left << std::setw(40) << ptr.get_name() << ptr.get_id() << std::endl;

	std::cout << std::endl;
	std::cout << std::left << std::setw(40)	<< "Courses" << "ID" << std::endl;
	std::cout << std::left << std::setw(45) << std::setfill('-') << "" << std::setfill(' ') << std::endl;
	
	for(auto cptr : Course_list)
		std::cout << std::left << std::setw(40) << cptr.get_course_name() << cptr.get_course_id() << std::endl;

	return (0);
}
