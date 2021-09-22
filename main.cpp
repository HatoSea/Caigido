#include <iostream>
#include "main.h"
#include <vector>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    vector <Officer> list;
    for (int i = 0; i < n; i++)
    {

        char a;
        cout<<"Are you worker(a), employees(b), engineers(c):\n";
        cin>>a;
        string b;
        cout<<"Enter level:\n";
        cin>>b;
        string c;
        cout<<"Enter name:\n";
        cin>>c;
        int d;
        cout<<"Enter age:\n";
        cin>>d;
        string e;
        cout<<"Enter gender:\n";
        cin>>e;
        string g;
        cout<<"Enter home_state:\n";
        cin>>g;
        string q;
        cout<<"Enter home_city\n";
        cin>>q;
        string z;
        cout<<"Enter home_street\n";
        cin>>z;
        int s;
        cout<<"Enter home_id\n";
        cin>>s;
        Workers p;
        Employees l;
        Engineers w;
        switch (a)
        {
        case 'a':
            p.add_level(b);
            p.add_name(c);
            p.add_age(d);
            p.add_gender(e);
            p.add_home_state(g);
            p.add_home_city(q);
            p.add_home_street(z);
            p.add_home_id(s);
            list[i].add_attribite("Worker level: "+p.get_level());
            list[i].add_name(p.get_name());
            list[i].add_age(p.get_age());
            list[i].add_gender(p.get_gender());
            list[i].add_home_state(p.get_home_state());
            list[i].add_home_city(p.get_home_city());
            list[i].add_home_street(p.get_home_street());
            list[i].add_home_id(p.get_home_id());
            break;
        case 'b':
            l.add_level(b);
            l.add_name(c);
            l.add_age(d);
            l.add_gender(e);
            l.add_home_state(g);
            l.add_home_city(q);
            l.add_home_street(z);
            l.add_home_id(s);
            list[i].add_attribite("Employees level: "+l.get_level());
            list[i].add_name(l.get_name());
            list[i].add_age(l.get_age());
            list[i].add_gender(l.get_gender());
            list[i].add_home_state(l.get_home_state());
            list[i].add_home_city(l.get_home_city());
            list[i].add_home_street(l.get_home_street());
            list[i].add_home_id(l.get_home_id());
            break;
        case 'c':
            w.add_level(b);
            w.add_name(c);
            w.add_age(d);
            w.add_gender(e);
            w.add_home_state(g);
            w.add_home_city(q);
            w.add_home_street(z);
            w.add_home_id(s);
            list[i].add_attribite("Engineers level: "+w.get_level());
            list[i].add_name(w.get_name());
            list[i].add_age(w.get_age());
            list[i].add_gender(w.get_gender());
            list[i].add_home_state(w.get_home_state());
            list[i].add_home_city(w.get_home_city());
            list[i].add_home_street(w.get_home_street());
            list[i].add_home_id(w.get_home_id());
            break;
        }
    }
    char b;
    cout<<"Method Perform: (1)Search (2)Add  (3)Output (4)Exit ";
    cin>>b;
    ManagerOfficer v;
    Officer h;
    switch (b)
    {
    case '1':
        v.Search(list);
        break;
    case '2':
        v.Add_members(list);
        break;
    case '3':
        v.Output(list);
        break;
    case '4':
        h.~Officer();
        break;
    }
    return 0;
}
