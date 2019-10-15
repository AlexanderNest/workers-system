#ifndef COMPANY_HPP
#define COMPANY_HPP

#include <string>
#include "director.hpp"
#include <vector>
#include "worker.hpp"

class Company
{
private:
    std::string companyName;
    int startDay, startMonth, startYear;

    Director director;

    std::vector <Worker> worker;


public:
    Company( std::string name, int sD, int sM, int sY );

    std::string getName();
    int getDay();
    int getMonth();
    int getYear();

   void setDirector(std::string name, std::string name2, std::string name3, int bDay,int dMonth,int bYear,int sDay,int sMonth,int sYear);
void setDirectorName(std::string name, std::string name2, std::string name3);
void setDirectorBirthday(int day, int month, int year);
void setDirectorEnter(int day, int month, int year);

    void getDirector();
    std::string getDirectorsName();

    void deleteDirector();

    void setName(std::string name);

    void setFoundation (int day, int month, int year);

    void addWorker();


    friend class CompanyWindow;





};

#endif // COMPANY_HPP
