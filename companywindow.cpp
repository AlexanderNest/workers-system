#include "companywindow.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "director.hpp"

CompanyWindow::CompanyWindow()
{

}

void CompanyWindow::addCompany()
{

    bool loop = 1;
    while (loop)
    {
        std::string name;
        std::cout << "Set name of company: ";
        std::cin >> name;
        std::cout << "Set the date of company foundation (DD MM YY): ";
        int day, month, year;
        std::cin >> day >> month >> year;

        company.push_back( Company(name, day, month, year) );

            system("cls");

        std::cout << "Do you want to add more companies? \n" <<
                     "Your choice: ";
        std::cin >> loop;

        system("cls");
    }
}

void CompanyWindow::wiewAllConpanies()
{
    for (unsigned int i = 0; i < company.size(); i++)
    {
        std::cout << "Company number: " << i + 1 << "\n" <<
                     "Name: " << company[i].getName() << "\n" <<
                     "Foundation: " << company[i].getDay() << "." <<
                     company[i].getMonth() << "." << company[i].getYear() << "\n\n";


    }
}

void CompanyWindow::wiewOneCompany()
{
    std::cout << "Choose how you want to select a company.\n" <<
                 "1. By name.\n" <<
                 "2. By number.\n" <<
                 "---------------\n0. Exit\n--------------\n\n." <<
                 "Your choice: ";
    int choice;
    std::cin >> choice;

    system ("cls");



    switch (choice)
    {
    case 1:
    {
        std::string name;

        std::cout << "Select a company's name: ";
        std::cin >> name;
        system("cls");
                 std::cout << "Company number: " << findCompany(name) + 1 << "\n" <<
                 "Name: " << company[findCompany(name)].getName() << "\n" <<
                 "Foundation: " << company[findCompany(name)].getDay() << "." <<
                 company[findCompany(name)].getMonth() << "." << company[findCompany(name)].getYear() << "\n\n";
        break;
    }
    case 2:
    {
        bool loop1 = 1;
        while (loop1)
        {
            int i;

            std::cout << "Select company's number: ";
            std::cin >> i;

            system("cls");

            std::cout << "Company number: " << i  << "\n" <<
                     "Name: " << company[i-1].getName() << "\n" <<
                     "Foundation: " << company[i-1].getDay() << "." <<
                     company[i-1].getMonth() << "." << company[i-1].getYear() << "\n\n";
            system("pause");
            system("cls");
            std::cout << "Do you want to see more companies?: ";
            std::cin >> loop1;

            system("cls");
        }

        break;
    }
    }
}

int CompanyWindow::findCompany(std::string name)
{
    for (unsigned int i = 0; i < company.size(); i++)
    {
        if (company[i].getName() == name) return i;
    }

    return 0;
}

void CompanyWindow::deleteCompany()
{
    system("cls");

    std::cout << "Choose how you want to delete a company.\n\n";
    std::cout << "1. By name.\n";
    std::cout << "2. By number.\n" <<
                 "---------------\n0. Exit\n--------------\n\n.";
    std::cout << "Your choice: ";

    int choice;
    std::string name;
    int number;

    std::cin >> choice;

    system("cls");

    switch(choice)
    {
        case 1:
        std::cout << "Enter a company name: ";
        std::cin >> name;

        company.erase(company.begin() + findCompany( name ));

        break;

    case 2:
        std::cout << "Enter company's number: ";
        std::cin >> number;

        company.erase(company.begin() + number - 1);
        break;


    }

    system("cls");
}

void CompanyWindow::addDirector()
{
    std::cout << "Select how you want to choose a company.\n" <<
                 "1.By name.\n" <<
                 "2.By number.\n" <<
                 "---------------\n0. Exit\n--------------\n\n." <<
                 "Your choice: ";
    int choice;
    std::cin >> choice;
            system("cls");
    switch (choice)
    {
    case 1:
    {
        std::string cName;
        std::cout << "Enter a company name: ";
        std::cin >> cName;

        std::string name, name2, name3;
        std::cout << "Set director's full name: ";
        std::cin >> name >> name2 >> name3;

        int day, month, year;
        std::cout<<"\nSet director's birthday (DD MM YY): ";
        std::cin >> day >> month >> year;

        int sDay, sMonth, sYear;
        std::cout << "\nSet director's enter (DD MM YY): ";
        std::cin >> sDay >> sMonth >> sYear;

        company[findCompany(cName)].setDirector(name, name2, name3, day, month, year, sDay, sMonth, sYear);


        system("cls");

        break;
    }
    case 2:
    {
        int k;
        std::cout << "Select company's number: ";
        std::cin >> k;


        std::string name, name2, name3;
        std::cout << "Set director's full name: ";
        std::cin >> name >> name2 >> name3;

        int day, month, year;
        std::cout<<"\nSet director's birthday (DD MM YY): ";
        std::cin >> day >> month >> year;

        int sDay, sMonth, sYear;
        std::cout << "\nSet director's enter (DD MM YY): ";
        std::cin >> sDay >> sMonth >> sYear;

        company[k-1].setDirector(name, name2, name3, day, month, year, sDay, sMonth, sYear);

        system("cls");
    }
    }

}

void CompanyWindow::wiewAllDirectors()
{
    for (unsigned int i = 0; i < company.size(); i++)
    {
        if (company[i].getDirectorsName() != "")
        {
            company[i].getDirector();
            std::cout << "\nCompany: " << company[i].getName() << "\n\n";
        }
    }
}

void CompanyWindow::deleteDirector()
{
    std::cout << "Select how you want to delete a director.\n" <<
                 "1. By company's name.\n" <<
                 "2. By company's number.\n" <<
                 "---------------\n0. Exit\n--------------\n\n." <<
                 "Your choice: ";
    int choice;
    std::cin >> choice;

    system ("cls");

    switch(choice)
    {
        case 1:
        {
        std::cout << "Select name: ";
        std::string name;
        std::cin >> name;

        company[findCompany(name)].deleteDirector();

        system("cls");

        break;
        }

    case 2:
    {
        int k;
        std::cout << "Select company's number: ";
        std::cin >> k;
        company[k-1].deleteDirector();
        system("cls");
        break;
    }
    case 0:
        break;

    }
}

void CompanyWindow::wiewOneDirector()
{
    std::cout << "Choose how you want to select a director.\n" <<
                 "1. By company's name.\n" <<
                 "2. By company's number.\n" <<
                 "---------------\n0. Exit\n--------------\n\n." <<
                 "Your choice: ";
    int choice;
    std::cin >> choice;

    system ("cls");



    switch (choice)
    {
    case 1:
    {
        std::string name;

        std::cout << "Select a company's name: ";
        std::cin >> name;
        system("cls");
                 company[findCompany(name)].getDirector();
                 system("pause");
        break;
    }
    case 2:
    {
        bool loop1 = 1;
        while (loop1)
        {
            int i;

            std::cout << "Select company's number: ";
            std::cin >> i;

            system("cls");

            company[i-1].getDirector();
            std::cout << "\n\n";
            system("pause");
            system("cls");
            std::cout << "Do you want to see more directors?: ";
            std::cin >> loop1;

            system("cls");
        }

        break;
    }
    }
}


void CompanyWindow::changeData()
{
    std::cout << "Select how you want to choose a company.\n\n";
    std::cout << "1. By name.\n" <<
                 "2. By number.\n\n" <<
                 "---------------\n0. Exit\n--------------\n\n." <<
                 "Your choice: ";
    int choice, number;
    std::cin >> choice;

    system("cls");

    if (choice == 1)
    {
        std::string name;
        std::cout << "Select a company's name: ";
        std::cin >> name;

        number = findCompany(name);
    }
    else if (choice == 0 ) return; else
    {
        std::cout << "Select company's number: ";
        std::cin >> number;
    }

    system("cls");

    std::cout << "Select a parameter to change.\n" <<
                 "1. Name.\n" <<
                 "2. Date of foundation.\n" <<
                 "3. Director.\n\n" <<
                 "Your choice: ";
    std::cin >> choice;

    system("cls");

    switch (choice)
    {
        case 1:
        {
        std::cout << "Set new name: ";
        std::string name;
        std::cin >> name;
        company[number-1].setName(name);
        break;
        }

    case 2:
    {
        std::cout << "Set new day of foundation (DD MM YY): ";
        int day, month, year;
        std::cin >> day >> month >> year;
        company[number-1].setFoundation(day, month, year);
        break;
    }
    case 3:
    {
        system("cls");

        std::cout << "What do you want to change?\n\n" <<
                     "1. Name.\n" <<
                     "2. Birthday.\n" <<
                     "3. Enter day.\n\n" <<
                     "Your choice: ";
        int choice1;
        std::cin >> choice1;

        switch(choice1)
        {
        case 1:
        {
            std::cout << "Set new full name: ";
            std::string name, name2, name3;
            std::cin >> name >> name2 >> name3;
            company[number-1].setDirectorName(name, name2, name3);
        }
        }
           /* std::cout << "Set new name of director: ";
            std::string name;
            std::cin >> name;
            company[number].setDirector(name);
            break;*/
     }
    }

    system("cls");
}

void CompanyWindow::addWorker ()
{
    system("cls");

    CompanyWindow::wiewAllConpanies();

    std::cout << "Set company number: ";
    int num;
    std::cin >> num;

    system("cls");

    bool loop = 1;
    while (loop)
    {
        company[num-1].addWorker();

        system("cls");

        std::cout << "Do you want to add new worker?";
        std::cin >> loop;
        system("cls");
    }



}

void CompanyWindow::wiewAllWorkers(int i)
{
    system("cls");
    std::cout << "Workers in this company: \n\n";
    for (unsigned int k = 0; k < company[i].worker.size(); k++)
    {
        std::cout << k+1 << ". ";
        company[i].worker[k].getWorker();
        std::cout << "\n";
    }

    std::cout << "\n";
}

void CompanyWindow::changeWorker()
{
    system("cls");
    std::cout << "Select the company in which you want to change the worker.\n\n";
    int choice;
    CompanyWindow::wiewAllConpanies();
    std::cout <<  "\nYour choice: ";
    std::cin >> choice;

    system("cls");


    int choice2;
    bool loop = 1;
    std::cout << "Select a worker: ";
    std::cin >> choice2;
    while (loop)
    {
    std::cout << "What do you want to change?\n";
    std::cout << "1. Name.\n2. Birthday.\n3. Enter day.\n4. Progress.\n5. Reprimands.\n6. End of the contract.\n";

    int choice1;

    std::cin >>  choice1;



    switch (choice1)
    {
    case 1:
    {
        system("cls");

        company[choice-1].worker[choice2-1].setName();
        system ("cls");
        break;
    }
    case 2:
    {
        system ("cls");
        company[choice-1].worker[choice2-1].setBirthday();
        system ("cls");
        break;
    }
    case 3:
        system ("cls");
        company[choice-1].worker[choice2-1].setEnterDay();
        system ("cls");
        break;
    case 4:
        system ("cls");
        company[choice-1].worker[choice2-1].setProgress();
        system ("cls");
        break;
    case 5:
        system ("cls");
        company[choice-1].worker[choice2-1].setReprimand();
        system ("cls");
        break;
    case 6:
        system ("cls");
        company[choice-1].worker[choice2-1].setContractEnd();
        system ("cls");
        break;
    }
    std::cout << "Do you want to countuniue changing?: ";
    std::cin >> loop;
    system("cls");
    }
}

void CompanyWindow::findSameProfession()
{
    system("cls");
    std::cout << "Select a profession: ";
    std::string prof;
    std::cin >> prof;

    for (int i = 0; i < company.size(); i++)
    {
        for (int k = 0; k < company[i].worker.size(); k++)
        {
            if (company[i].worker[k].position == prof )
            {
                std::cout << "\n";
                std::cout << "Company: " << company[i].getName() << "\n";
                company[i].worker[k].getWorker();
                std::cout << "\n";
            }
        }
    }
}

void CompanyWindow::findMaxReprimand()
{
    system("cls");
    std::cout << "Select a company:\n";



    std::cout << "Your choice: ";
    int i;
    std::cin >> i;

    int max = -1;
    int buff;

        for (int k = 0; k < company[i-1].worker.size(); k++)
        {
            if (company[i-1].worker[k].reprimand > max )
            {
                max = company[i-1].worker[k].reprimand;
                buff = k;
            }
        }
      system("cls");

     std::cout << "Max reprimand:\n\n ";
     company[i-1].worker[buff].getWorker();



}


void CompanyWindow::findMaxSalary()
{
    system("cls");
    std::cout << "Select a company:\n";



    std::cout << "Your choice: ";
    int i;
    std::cin >> i;

    int max = -1;
    int buff;

        for (int k = 0; k < company[i-1].worker.size(); k++)
        {
            if (company[i-1].worker[k].salary > max )
            {
                max = company[i-1].worker[k].salary;
                buff = k;
            }
        }
      system("cls");

     std::cout << "Max salary:\n\n ";
     company[i-1].worker[buff].getWorker();
}








