#include "Template.h"

Student::Student(std::string name_i, short int id_i){
  name = name_i;
  id   = id_i;
}
std::string Student::get_name() const{
  return name;
}
short int Student::get_id() const{
  return id;
}
void Student::set_name(std::string student_name){
  name = student_name;
}
void Student::set_id(short int student_id){
  id = student_id;
}

Course::Course(std::string name, short int the_id, unsigned char the_credit){
	course_name = name;
	id = the_id;
	credit = the_credit;
}
std::string Course::get_course_name() const{
	return course_name;
}
short int Course::get_course_id() const{
	return id;
}
short int Course::get_credit() const{
	return credit;
}

Grade::Grade(short int sid, short int cid, unsigned char grd) {
	student_id = sid;
	course_id = cid;
	grade = grd;
}
short int Grade::get_sid() const {
	return student_id;
}
short int Grade::get_cid() const {
	return course_id;
}
unsigned char Grade::get_grade() const {
	return grade;
}
