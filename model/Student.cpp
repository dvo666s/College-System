

class Student{
    private:
        //  data start

        string name = "unkown",
               email = "user@email.com";
        
        int id = 0,
            age = 0;

        long phonenum = 0;

        double gpa = 0;

        //  data end

    public:
        // set start

        void set_name(string name){ this-> name = name; }
        void set_email(string email){ this-> email = email; }
        void set_id(int id){ this-> id = id; }
        void set_age(int age){ this-> age = age; }
        void set_phonenum(int phonenum){ this-> phonenum = phonenum; }
        void set_gpa(double gpa){ this-> gpa = gpa; }
        
        // set end
        
        // get start

        string get_name(){return name;}
        string get_email(){return email;}
        int get_id(){return id;}
        int get_age(){return age;}
        int get_phonenum(){return phonenum;}
        double get_gpa(){return gpa;}

        // get end
};

