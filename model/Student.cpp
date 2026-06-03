#include "Base.cpp"

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

