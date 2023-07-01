#ifndef STUDENT_H
#define STUDENT_H

/*******************************************************************************
 * Student Class
 *  This class represents a student. This class contains all of the personal
 *  information of the student.
 ******************************************************************************/

#include "date.h"

class Student
{
public:
/*******************************************************************************
 * Student();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/
    Student();
/*******************************************************************************
 * Student(string n,int i,string nu,int a,char g,string s,double gp);
 * Constructor; Initialize class attributes
 * Parameters: string n,int i,string nu,int a,char g,string s,double gp
 * Return: none
 ******************************************************************************/
    Student(string n,       // IN - name
            int i,          // IN - id number
            string nu,      // IN - phone number
            int a,          // IN - age
            char g,         // IN - gender
            string s,       // IN - class standing
            double gp);     // IN - gpa
/*******************************************************************************
 * virtual ~Student();
 * Destructor; Destroys class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/
    virtual ~Student();
/*******************************************************************************
 * void set_name(string input);
 * Mutator; Sets name
 * Parameters: string input
 * Return: none
 ******************************************************************************/
    void set_name(string input);    // IN - student's name
/*******************************************************************************
 * void set_id(int input);
 * Mutator; Sets the id
 * Parameters: int input
 * Return: none
 ******************************************************************************/
    void set_id(int input);         // IN - student's id number
/*******************************************************************************
 * void set_number(string input);
 * Mutator; Sets the phone number
 * Parameters: string input
 * Return: none
 ******************************************************************************/
    void set_number(string input);  // IN - student's phone number
/*******************************************************************************
 * void set_age(int input);
 * Mutator; Sets the age
 * Parameters: int input
 * Return: none
 ******************************************************************************/
    void set_age(int input);        // IN - student's age
/*******************************************************************************
 * void set_gender(char input);
 * Mutator; Sets the gender
 * Parameters: char input
 * Return: none
 ******************************************************************************/
    void set_gender(char input);    // IN - student's gender
/*******************************************************************************
 * void set_standing(string input);
 * Mutator; Sets the class standing
 * Parameters: string input
 * Return: none
 ******************************************************************************/
    void set_standing(string input);// IN - student's class standing
/*******************************************************************************
 * void set_gpa(double input);
 * Mutator; Sets the gpa
 * Parameters: double input
 * Return: none
 ******************************************************************************/
    void set_gpa(double input);     // IN - student's gpa
/*******************************************************************************
 * string get_name() const;
 * Accessor; returns name
 * Parameters: none
 * Return: string
 ******************************************************************************/
    string get_name() const;
/*******************************************************************************
 * int get_id() const;
 * Accessor; returns id number
 * Parameters: none
 * Return: int
 ******************************************************************************/
    int get_id() const;
/*******************************************************************************
 * string get_number() const;
 * Accessor; returns phone number
 * Parameters: none
 * Return: string
 ******************************************************************************/
    string get_number() const;
/*******************************************************************************
 * int get_age() const;
 * Accessor; returns age
 * Parameters: none
 * Return: int
 ******************************************************************************/
    int get_age() const;
/*******************************************************************************
 * char get_gender() const;
 * Accessor; returns gender
 * Parameters: none
 * Return: char
 ******************************************************************************/
    char get_gender() const;
/*******************************************************************************
 * string get_standing() const;
 * Accessor; returns class standing
 * Parameters: none
 * Return: string
 ******************************************************************************/
    string get_standing() const;
/*******************************************************************************
 * double get_gpa() const;
 * Accessor; returns gpa
 * Parameters: none
 * Return: double
 ******************************************************************************/
    double get_gpa() const;
/*******************************************************************************
 * virtual void print_student();
 * Virtual Function; print function
 * Parameters: none
 * Return: none
 ******************************************************************************/
    virtual void print_student();

protected:
    string name;        // IN - student's name
    int id;             // IN - student's id number
    string number;      // IN - student's phone number
    int age;            // IN - student's age
    char gender;        // IN - student's gender
    string standing;    // IN - student's class standing
    double gpa;         // IN - student's gpa
};

#endif // STUDENT_H
