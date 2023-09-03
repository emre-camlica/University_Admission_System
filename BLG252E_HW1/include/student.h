/* @Author
 * Student Name:  Emre Çamlıca
 * Student ID : 150210071
 */
#include <string>
#include <iostream>
using namespace std;

class Student{
    public:
    Student();
    Student(string name, float GPA, float GRE, int TOEFL);
    Student(Student const &student);
    ~Student();
    
    string get_name() const;
    float get_GPA() const;
    float get_GRE() const;
    int get_TOEFL() const;
    int get_number_of_applications() const;

    void set_name(string);
    void set_GPA(float);
    void set_GRE(float);
    void set_TOEFL(int);
    void set_number_of_applications(int) const;

    private:
    string name;
    float GPA;
    float GRE;
    int TOEFL;
    mutable int number_of_applications;
};