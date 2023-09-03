/* @Author
 * Student Name:  Emre Çamlıca
 * Student ID : 150210071
 */
#include "university.h"
#include <string>
#include <iostream>

University :: University(string name, float GPA, float GRE, float TOEFL, float bias, string country){
    this->set_name(name);
    this->set_weight_values(GPA, GRE, TOEFL);
    this->set_bias(bias);
    this->set_country(country);
}

string University :: get_name() const{
    return this->name;
}
string University :: get_country() const{
    return this->country;
}
float * University :: get_weight_values(){ // Returns the weight_values array
    return this->weight_values;
}
float University :: get_bias() const{
    return this->bias;
}

void University :: set_name(string name){
    this->name = name;
}

void University :: set_country(string country){
    this->country = country;
}

void University :: set_weight_values(float GPA, float GRE, float TOEFL){
    this->weight_values[0] = GPA;
    this->weight_values[1] = GRE;
    this->weight_values[2] = TOEFL;
}

void University :: set_bias(float bias){
    this->bias = bias;
}

/*
    Evaluate function respectively multiplies the GPA, GRE and TOEFL values of the student with the 0, 1 and 2 indexed elements of the 
    weight values array and adds the bias value to this total. If the result is greater than zero, student is admitted, if not the 
    student is rejected with the respected messages printed to screen. In either case, the number of applications value is incremented.
*/
void University :: evaluate_student(Student const &student){
    if(student.get_GPA()*this->get_weight_values()[0] + student.get_GRE()*this->get_weight_values()[1] + student.get_TOEFL()*this->get_weight_values()[2] + this->get_bias() >= 0){
        student.set_number_of_applications(student.get_number_of_applications()+1);
        cout << student.get_name() << " is admitted to " << this->get_name() <<".\n";
    }

    else{
        student.set_number_of_applications(student.get_number_of_applications()+1);
        cout << student.get_name() << " is rejected from " << this->get_name() <<".\n";
        }
}



