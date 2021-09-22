#include <iostream>
#include <vector>
using namespace std;
//Struct Address
struct Address
{
    int m_id;
    string m_street;
    string m_city;
    string m_state;
};
//Class Officer
class Officer
{
private:
//Attribute
    Address m_home;
    int m_age;
    string m_name;
    string m_gender;
    string m_attribute;
public:
//Methods
    void add_name(string name);
    string get_name ();
    void add_age( int age);
    int get_age();
    void add_gender(string gender);
    string get_gender();
    void add_home_state(string state);
    string get_home_state();
    void add_home_city(string city);
    string get_home_city();
    void add_home_street(string street);
    string get_home_street();
    void add_home_id(int id);
    int get_home_id();
    void add_attribite(string attribute);
    string get_attribute();
    ~Officer();
};
//Class Worker ->Encapsulation-> Officer
class Workers: public Officer
{
    private:
        string m_level;
        Officer m_information_Worker;
    public:
        void add_level(string level);
        string get_level();
        
        
};
//Class Employees ->Encapsulation-> Officer
class Employees: public Officer
{
    private:
        string m_level;
        Officer m_information_Employees;
    public:
        void add_level(string level);
        string get_level();
};
//Class Engineers ->Encapsulation-> Officer
class Engineers: public Officer
{
    private:
        string m_level;
        Officer m_information_Engineer;
    public:
        void add_level(string level);
        string get_level();
        
};
class ManagerOfficer
{
    public:
        void Output (vector <Officer> a);
        void Search (vector <Officer> a);
        void Add_members(vector <Officer> a);  
};

