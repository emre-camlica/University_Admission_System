/* @Author
 * Student Name:  Emre Çamlıca
 * Student ID : 150210071
 */
#include "student.h"
#include <string>
#include <iostream>

class University{
    public:
    //University();
    University(string, float, float, float, float, string = "");

    void evaluate_student(Student const &);;
    string get_name() const;
    string get_country() const;
    float * get_weight_values();
    float  get_bias() const;

    void set_name(string);
    void set_country(string);
    void set_weight_values(float, float, float);
    void set_bias(float);
    
    
    private:
    string name;
    string country;
    float weight_values[3];
    float bias;
};