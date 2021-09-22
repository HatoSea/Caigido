#include "main.h"
//Difinition Address
void Officer::add_home_state(string state)
{
    m_home.m_state=state;
}
string Officer::get_home_state()
{
    return m_home.m_state;
}
void Officer::add_home_city(string city)
{
    m_home.m_city=city;
}
string Officer::get_home_state()
{
    return m_home.m_city;
}
void Officer::add_home_state(string street)
{
    m_home.m_street=street;
}
string Officer::get_home_state()
{
    return m_home.m_street;
}
void Officer::add_home_id(int id)
{
    m_home.m_id=id;
}
int Officer::get_home_id()
{
    return m_home.m_id;
}