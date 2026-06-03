#include "Base.cpp"

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