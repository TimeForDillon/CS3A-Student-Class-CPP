/*******************************************************************************
 * AUTHOR        : Dillon Welsh
 * ASSIGNMENT 8  : INHERITANCE
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 11/11/2020
 ******************************************************************************/

#include "cs003astudent.h"

/*******************************************************************************
 * printAll Function
 *  This function prints passed student using virtual function
 ******************************************************************************/

void printAll(Student &input)   // IN - passed in student
{
    input.print_student();
}

int main()
{
    int testCase;

    do
    {
        cout << "Enter test case 1-3 (0 to exit): ";
        cin >> testCase;

        if(testCase == 0) cout << "Exiting...\n";
        else if(testCase == 1)
        {
            cout << "---Test 1: Student class---\n";
            cout << ">>Calling default constructor, then all mutators,\n"
                 << "printing output after each call. Also shows when\n"
                 << "destructor is called.\n\n";
            Student s1;
            s1.print_student();
            cout << endl;
            s1.set_name("Katy Perry");
            s1.print_student();
            cout << endl;
            s1.set_id(999899);
            s1.print_student();
            cout << endl;
            s1.set_number("949-555-1234");
            s1.print_student();
            cout << endl;
            s1.set_age(30);
            s1.print_student();
            cout << endl;
            s1.set_gender('F');
            s1.print_student();
            cout << endl;
            s1.set_standing("Freshman");
            s1.print_student();
            cout << endl;
            s1.set_gpa(4.0);
            s1.print_student();
            cout << endl;
            cout << "---End of Student class test---\n\n";
        }
        else if(testCase == 2)
        {
            cout << "---Test 2: CS133Student class---\n";
            cout << ">>Calling default constructor, then all mutators,\n"
                 << "printing output after each call. Also shows when\n"
                 << "destructor is called.\n\n";
            CS003AStudent css1;
            css1.print_student();
            cout << endl;
            css1.set_name("Jim Cramer");
            css1.print_student();
            cout << endl;
            css1.set_id(668899);
            css1.print_student();
            cout << endl;
            css1.set_number("949-665-1234");
            css1.print_student();
            cout << endl;
            css1.set_age(63);
            css1.print_student();
            cout << endl;
            css1.set_gender('M');
            css1.print_student();
            cout << endl;
            css1.set_standing("Freshman");
            css1.print_student();
            cout << endl;
            css1.set_gpa(3.3);
            css1.print_student();
            cout << endl;
            css1.set_totalScore(500);
            css1.print_student();
            cout << endl;
            css1.set_javaKnowledge("yes");
            css1.print_student();
            cout << endl;
            css1.set_graduationDate(Date(5,12,2016));
            css1.print_student();
            cout << endl;
            cout << "---End of CS133Student class test---\n\n";
        }
        else if(testCase == 3)
        {
            cout << "---Final output---\n";
            cout << ">>Creating an array of 7 objects - 4 Students and 3 CS133Students."
                 << endl << endl;
            cout << ">>Calling printAll() function, passing in each element\n";
            cout << "of the student array.\n\n";

            Student s1("Katy Perry", 999899, "949-555-1234", 30, 'F', "Freshman", 4);
            Student s2("Tom Brady", 456789, "714-555-5555", 37, 'M', "Sophomore", 3.23);
            Student s3("Russell Wilson", 876542, "760-703-1234", 26, 'M', "Sophomore", 3.8);
            Student s4("Norm Drapple", 777744, "213-555-6789", 18, 'M', "Freshman", 1.1);
            CS003AStudent css1("Jim Cramer", 668899, "949-665-1234", 63, 'M', "Freshman", 3.3, 500, "yes", Date(5,12,2016));
            CS003AStudent css2("Clayton Kershaw", 156789, "248-555-6543", 29, 'M', "Sophomore", 2.5, 700, "no", Date(5,11,2015));
            CS003AStudent css3("Jim Rome", 876545, "703-703-7654", 40, 'M', "Sophomore", 3.2, 800, "yes", Date(5,11,2015));

            Student *list[7];
            list[0]=&s1;
            list[1]=&s2;
            list[2]=&s3;
            list[3]=&s4;
            list[4]=&css1;
            list[5]=&css2;
            list[6]=&css3;
            for(int i = 0; i < 7; i++)
            {
                printAll(*list[i]);
                cout << endl << endl;
            }

            cout << ">>Deleting all students.\n\n";
        }
        else cout << "No test case exists.\n";
    }
    while(testCase!=0);

    return 0;
}
