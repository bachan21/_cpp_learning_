#ifndef CLASS_H
#define CLASS_H

#include <string>

class Student{
public:
  Student(std::string name_i, short int id_i);
  
  std::string get_name() const;
  short int get_id() const;
  
  void set_name(std::string student_name);
  void set_id(short int student_id); 
private:
    std::string name;
    short int id;
};

class Course{
private:
  std::string course_name;
  short int id;
  unsigned char credit;

public:
  Course(std::string name, short int the_id, unsigned char the_credit);
  
  std::string get_course_name() const;
  short int get_course_id() const;
  short int get_credit() const;
  
  void set_course_name(std::string cname);
  void set_course_id(short int cid);
  void set_credit(unsigned char the_credit);
};

// The grade class stores student name, course id and grade
class Grade{
private:
  short int student_id;
  short int course_id;
  unsigned char grade;

public:
  Grade(short int sid, short int cid, unsigned char grd);

  short int get_sid() const;
  short int get_cid() const;
  unsigned char get_grade() const;

  void set_sid(short int sid);
  void set_cid(short int cid);
  void set_grade(unsigned char grd);
};
#endif //CLASS_H
