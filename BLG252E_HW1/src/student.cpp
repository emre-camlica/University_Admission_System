/* @Author
 * Student Name:  Emre Çamlıca
 * Student ID : 150210071
 */
#include "student.h"
#include <string>
#include <iostream>

Student :: Student(){
    this->set_name(NULL);
    this->set_GPA(0);
    this->set_GRE(0);
    this->set_TOEFL(0);
    this->set_number_of_applications(0);
}

Student :: Student(string name, float GPA, float GRE, int TOEFL){
    this->set_name(name);
    this->set_GPA(GPA);
    this->set_GRE(GRE);
    this->set_TOEFL(TOEFL);
    this->set_number_of_applications(0);
    cout << get_name() << " logged in to the system. \n";
}

Student :: Student(Student const &student){
    this->set_name(student.get_name());
    this->set_GPA(student.get_GPA());
    this->set_GRE(student.get_GRE());
    this->set_TOEFL(student.get_TOEFL());
    this->set_number_of_applications(student.get_number_of_applications());
    cout << student.get_name() << " logged in to the system. \n";
}
Student :: ~Student(){
    cout << this->get_name() << " logged out of the system with " << this->get_number_of_applications() << " application(s)\n";
}

string Student :: get_name() const{
    return this->name;
}

float Student :: get_GPA() const{
    return this->GPA;
}

float Student :: get_GRE() const{
    return this->GRE;
}

int Student :: get_TOEFL() const{
    return this->TOEFL;
}

int Student :: get_number_of_applications() const{
    return this->number_of_applications;
}

void Student :: set_name(string name){
    this->name=name;
}

void Student :: set_GPA(float GPA){
    this->GPA=GPA;
}

void Student :: set_GRE(float GRE){
    this->GRE=GRE;
}

void Student :: set_TOEFL(int TOEFL){
    this->TOEFL=TOEFL;
}

void Student :: set_number_of_applications(int number_of_applications) const{
    this->number_of_applications=number_of_applications;
}