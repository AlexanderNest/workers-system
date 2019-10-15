#include "director.hpp"
#include <iostream>

void Director::setAll(std::string name, std::string name2, std::string name3, int bDay,int bMonth,int bYear,int sDay,int sMonth,int sYear)
{
    this -> name = name;
    this -> name2 = name2;
    this -> name3 = name3;
    this -> bDay = bDay;
    this -> bMonth = bMonth;
    this -> bYear = bYear;
    this -> sDay = sDay;
    this ->sMonth = sMonth;
    this -> sYear = sYear;
}

void Director::getDirector()
{
    std::cout << "Name: " << name << " " << name2 << " " << name3 << "\n";
    std::cout << "Birthday: " << bDay << "." << bMonth << "." << bYear << ".";
    std::cout << "\nEnter: " << sDay << "." << sMonth << "." << sYear;

}

std::string Director::getName()
{
    return name;
}
void Director::changeData()
{
    name = "";
}

void Director::setName(std::string name, std::string name2, std::string name3)
{
    this -> name= name;
    this -> name2 = name2;
    this -> name3 = name3;
}

int Director::getDay()
{
    return sDay;
}

int Director::getMonth()
{
    return sMonth;
}

int Director::getYear()
{
    return sYear;
}
