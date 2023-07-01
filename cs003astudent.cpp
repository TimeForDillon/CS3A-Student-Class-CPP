/*******************************************************************************
 * Student CS003AStudent
 *  This class represents a CS003A student. This class contains all of the
 *  personal information of the CS003A student.
 ******************************************************************************/

#include "cs003astudent.h"

/*******************************************************************************
 * CS003AStudent();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/

CS003AStudent::CS003AStudent()
{
    totalScore = 0;
    javaKnowledge = "no";
}

/*******************************************************************************
 * CS003AStudent(int ts,string jk,Date input);
 * Constructor; Initialize class attributes
 * Parameters: int ts,string jk,Date input
 * Return: none
 ******************************************************************************/

CS003AStudent::CS003AStudent(int ts,         // IN - total score
                             string jk,      // IN - java knowledge
                             Date input)     // IN - graduation date
{
    totalScore = ts;
    javaKnowledge = jk;
    graduationDate = input;
}

/*******************************************************************************
 * CS003AStudent(string n,int i,string nu,int a,char g,string s,double gp,int ts,
           string jk,Date input);
 * Constructor; Initialize class attributes
 * Parameters: string n,int i,string nu,int a,char g,string s,double gp,int ts,
               string jk,Date input
 * Return: none
 ******************************************************************************/

CS003AStudent::CS003AStudent(string n,       // IN - name
                             int i,          // IN - id number
                             string nu,      // IN - phone number
                             int a,          // IN - age
                             char g,         // IN - gender
                             string s,       // IN - class standing
                             double gp,      // IN - gpa
                             int ts,         // IN - total score
                             string jk,      // IN - java knowledge
                             Date input)     // IN - graduation date
{
    name = n;
    id = i;
    number = nu;
    age = a;
    gender = g;
    standing = s;
    gpa = gp;
    totalScore = ts;
    javaKnowledge = jk;
    graduationDate = input;
}

/*******************************************************************************
 * ~CS003AStudent();
 * Destructor; Destroys class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/

CS003AStudent::~CS003AStudent()
{
    cout << "Called CS133Student destructor" << endl;
}

/*******************************************************************************
 * void set_totalScore(int input);
 * Mutator; sets total score
 * Parameters: int input
 * Return: none
 ******************************************************************************/

void CS003AStudent::set_totalScore(int input)     // IN - total score
{
    totalScore = input;
}

/*******************************************************************************
 * void set_javaKnowledge(string input);
 * Mutator; sets java knowledge
 * Parameters: string input
 * Return: none
 ******************************************************************************/

void CS003AStudent::set_javaKnowledge(string input)   // IN - java knowledge
{
    javaKnowledge = input;
}

/*******************************************************************************
 * void set_graduationDate(Date input);
 * Mutator; sets graduation date
 * Parameters: Date input
 * Return: none
 ******************************************************************************/

void CS003AStudent::set_graduationDate(Date input)    // IN - graduation date
{
    graduationDate = input;
}

/*******************************************************************************
 * int get_totalScore() const;
 * Accessor; returns total score
 * Parameters: none
 * Return: int
 ******************************************************************************/

int CS003AStudent::get_totalScore() const
{
    return totalScore;
}

/*******************************************************************************
 * string get_javaKnowledge() const;
 * Accessor; returns java knowledge
 * Parameters: none
 * Return: string
 ******************************************************************************/

string CS003AStudent::get_javaKnowledge() const
{
    return javaKnowledge;
}

/*******************************************************************************
 * Date get_graduationDate() const;
 * Accessor; returns graduation date
 * Parameters: none
 * Return: Date
 ******************************************************************************/

Date CS003AStudent::get_graduationDate() const
{
    return graduationDate;
}

/*******************************************************************************
 * void print_student();
 * Accessor; prints out student data
 * Parameters: none
 * Return: none
 ******************************************************************************/

void CS003AStudent::print_student()
{
    cout << name << " " << id << " " << number;
    cout << " " << age << " " << gender << " ";
    cout << this->get_standing() << " " << gpa;
    cout << " " << totalScore << " " << javaKnowledge << " ";
    graduationDate.printNumeric();
}
