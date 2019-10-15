#ifndef COMPANYWINDOW_HPP
#define COMPANYWINDOW_HPP

#include "company.hpp"
#include <vector>
#include <iostream>


class CompanyWindow
{
private:
    std::vector <Company> company;

public:
    CompanyWindow();

    void addCompany();
    void deleteCompany();

    void wiewOneCompany();
    void wiewAllConpanies();

    int findCompany(std::string name);

    void addDirector();

    void wiewAllDirectors();
    void wiewOneDirector();

    void deleteDirector();

    void changeData();

    void addWorker();
    void findWorker(std::string profession);

    void wiewAllWorkers(int i);

    void changeWorker();

    void findSameProfession();

    void findMaxReprimand();

    void findMaxSalary();























};

#endif // COMPANYWINDOW_HPP
