/*******************************************************************************
 * Student Class
 *  This class represents a student. This class contains all of the personal
 *  information of the student.
 ******************************************************************************/

#include "student.h"

/*******************************************************************************
 * Student();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/

Student::Student()
{
    name = "Name";
    id = 0;
    number = "000-000-0000";
    age = 0;
    gender = 'X';
    standing = "classStanding";
    gpa = 0.0;
}

/*******************************************************************************
 * Student(string n,int i,string nu,int a,char g,string s,double gp);
 * Constructor; Initialize class attributes
 * Parameters: string n,int i,string nu,int a,char g,string s,double gp
 * Return: none
 ******************************************************************************/

Student::Student(string n,       // IN - name
                 int i,          // IN - id number
                 string nu,      // IN - phone number
                 int a,          // IN - age
                 char g,         // IN - gender
                 string s,       // IN - class standing
                 double gp)      // IN - gpa
{
    name = n;
    id = i;
    number = nu;
    age = a;
    gender = g;
    standing = s;
    gpa = gp;
}

/*******************************************************************************
 * virtual ~Student();
 * Destructor; Destroys class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/

Student::~Student()
{
    cout << "Called Student destructor" << endl;
}

/*******************************************************************************
 * void set_name(string input);
 * Mutator; Sets name
 * Parameters: string input
 * Return: none
 ******************************************************************************/

void Student::set_name(string input)    // IN - student's name
{
    name = input;
}

/*******************************************************************************
 * void set_id(int input);
 * Mutator; Sets the id
 * Parameters: int input
 * Return: none
 ******************************************************************************/

void Student::set_id(int input)         // IN - student's id number
{
    id = input;
}

/*******************************************************************************
 * void set_number(string input);
 * Mutator; Sets the phone number
 * Parameters: string input
 * Return: none
 ******************************************************************************/

void Student::set_number(string input)  // IN - student's phone number
{
    number = input;
}

/*******************************************************************************
 * void set_age(int input);
 * Mutator; Sets the age
 * Parameters: int input
 * Return: none
 ******************************************************************************/

void Student::set_age(int input)        // IN - student's age
{
    age = input;
}

/*******************************************************************************
 * void set_gender(char input);
 * Mutator; Sets the gender
 * Parameters: char input
 * Return: none
 ******************************************************************************/

void Student::set_gender(char input)    // IN - student's gender
{
    gender = input;
}

/*******************************************************************************
 * void set_standing(string input);
 * Mutator; Sets the class standing
 * Parameters: string input
 * Return: none
 ******************************************************************************/

void Student::set_standing(string input)// IN - student's class standing
{
    standing = input;
}

/*******************************************************************************
 * void set_gpa(double input);
 * Mutator; Sets the gpa
 * Parameters: double input
 * Return: none
 ******************************************************************************/

void Student::set_gpa(double input)     // IN - student's gpa
{
    gpa = input;
}

/*******************************************************************************
 * string get_name() const;
 * Accessor; returns name
 * Parameters: none
 * Return: string
 ******************************************************************************/

string Student::get_name() const
{
    return name;
}

/*******************************************************************************
 * int get_id() const;
 * Accessor; returns id number
 * Parameters: none
 * Return: int
 ******************************************************************************/

int Student::get_id() const
{
    return id;
}

/*******************************************************************************
 * string get_number() const;
 * Accessor; returns phone number
 * Parameters: none
 * Return: string
 ******************************************************************************/

string Student::get_number() const
{
    return number;
}

/*******************************************************************************
 * int get_age() const;
 * Accessor; returns age
 * Parameters: none
 * Return: int
 ******************************************************************************/

int Student::get_age() const
{
    return age;
}

/*******************************************************************************
 * char get_gender() const;
 * Accessor; returns gender
 * Parameters: none
 * Return: char
 ******************************************************************************/

char Student::get_gender() const
{
    return gender;
}

/*******************************************************************************
 * string get_standing() const;
 * Accessor; returns class standing
 * Parameters: none
 * Return: string
 ******************************************************************************/

string Student::get_standing() const
{
    return standing;
}

/*******************************************************************************
 * double get_gpa() const;
 * Accessor; returns gpa
 * Parameters: none
 * Return: double
 ******************************************************************************/

double Student::get_gpa() const
{
    return gpa;
}

/*******************************************************************************
 * virtual void print_student();
 * Virtual Function; print function
 * Parameters: none
 * Return: none
 ******************************************************************************/

void Student::print_student()
{
    cout << name << " " << id << " " << number;
    cout << " " << age << " " << gender << " ";
    cout << this->get_standing() << " " << gpa;
}
