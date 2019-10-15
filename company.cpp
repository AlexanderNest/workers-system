#include "company.hpp"
#include <string>

Company::Company(std::string name, int sD, int sM, int sY)
{
    companyName = name;
    startDay = sD;
    startMonth = sM;
    startYear = sY;
}

std::string Company::getName()
{
    return companyName;
}

int Company::getDay()
{
    return startDay;
}

int Company::getMonth()
{
    return startMonth;
}

int Company::getYear()
{
    return startYear;
}

void Company::setDirector(std::string name, std::string name2, std::string name3, int bDay, int bMonth, int bYear, int sDay,  int sMonth,  int sYear)
{
    director.setAll(name, name2, name3, bDay, bMonth, bYear, sDay, sMonth, sYear );
}

void Company::setDirectorName(std::string name, std::string name2, std::string name3)
{
    director.setName(name, name2, name3);
}
void setDirectorBirthday(int day, int month, int year);
void setDirectorEnter(int day, int month, int year);

void Company::getDirector()
{
    director. Director::getDirector();
}

std::string Company::getDirectorsName()
{
    return director . Director::getName();
}

void Company::deleteDirector()
{
   director.changeData();
}

void Company::setName(std::string name)
{
    companyName = name;
}

void Company::setFoundation (int day, int month, int year)
{
    startDay = day;
    startMonth = month;
    startYear = year;
}

void Company::addWorker()
{
    std::cout << "Worker's data.\n\n";
    std::cout << "Name: ";
    std::string name;
    std::cin >> name;

    std::string pos;
    int day, entD, month, entM, year, entY, sal;

    std::cout << "Set position: ";
    std::cin >> pos;

    std::cout << "\nSet date of contract end (DD MM YY): ";
    std::cin >> day >> month >> year;

    std::cout << "\nSet date of enter (DD MM YY): ";
    std::cin >> entD >> entM >> entY;

    std::cout << "\nSet salary: ";
    std::cin >> sal;

    worker.push_back(Worker(name, pos, sal, entD, entM, entY, day, month, year));

}





























