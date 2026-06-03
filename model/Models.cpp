#include <iostream>
using namespace std;

class Teacher;
class Base{
    private:
        //  data start
        
            string name = "unkown",
                    email = "user@email.com";

            int id = 0,
                age = 0;

            long long phonenum = 0;

        //  data end

    public:
        // set start

            void set_name(string name){ this-> name = name; }
            void set_email(string email){ this-> email = email; }
            void set_id(int id){ this-> id = id; }
            void set_age(int age){ this-> age = age; }
            void set_phonenum(long long phonenum){ this-> phonenum = phonenum; }

        // set end

        // get start

            string get_name(){return name;}
            string get_email(){return email;}
            int get_id(){return id;}
            int get_age(){return age;}
            long long get_phonenum(){return phonenum;}

        // get end

};

class Student : public Base{
    private:
        //  data start

            double gpa = 0;



        //  data end

    public:
        // set start
 
            void set_gpa(double gpa){ this-> gpa = gpa; }

        // set end
        
        // get start

            double get_gpa(){return gpa;}

        // get end
};


class Teacher : public Base {
    private:
        //  data start

            double salary = 0;

        //  data end

    public:
        // set start
 
            void set_salary(double salary){ this->salary = salary; }

        // set end

        // get start

            double get_salary(){ return salary; }

        // get end
};

int main(){
    

    return 0;
}
