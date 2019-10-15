#include <iostream>
#include "mainwindow.hpp"

int main()
{
    bool loop = 1;
    MainWindow mainWindow;
    CompanyWindow companyWindow;

    while (loop)
    {



        mainWindow.openMainWindow();

        int choice;
        std::cin >> choice;
        system("cls");

        switch (choice)
        {
        case 1:
            mainWindow.openCompanyWindow();
            std::cin >> choice;

            system("cls");

            switch(choice)
            {
            case 1:
                companyWindow.addCompany();
                break;
            case 2:

                companyWindow.wiewAllConpanies();
                             system("pause");
                             system("cls");
                break;
            case 3:
                companyWindow.deleteCompany();
                break;
            case 4:
            {
                bool loop1 = 1;
                while (loop1)
                {
                    companyWindow.addDirector();
                    std::cout << "Do you want to add more directors?: ";
                    std::cin >> loop1;
                    system("cls");
                }
                break;
            }
            case 5:
                companyWindow.wiewAllDirectors();
                system("pause");
                system("cls");
                break;
            case 6:
            {

                companyWindow.wiewOneCompany();
                system("cls");
                break;
            }

            case 7:
                companyWindow.deleteDirector();
                system("cls");
                break;

            case 8:
                companyWindow.wiewOneDirector();
                system("cls");
                break;
            case 9:
                companyWindow.changeData();
                break;
            case 0:
                break;

            }
            break;
        case 2:
            mainWindow.openWorkerWindow();

            std::cin >> choice;

            switch (choice)
            {
            case 1:
            {
                companyWindow.findSameProfession();
                system("pause");
                system("cls");
                break;
            }
            case 2:
            {

                companyWindow.changeWorker();
                break;
            }
            case 3:
            {

                system("cls");
                companyWindow.wiewAllConpanies();
                std::cout << "Choose a company to wiew: ";
                int choice;
                std:: cin >> choice;

                companyWindow.wiewAllWorkers(choice -1 );

                system("pause");
                system("cls");

                break;
            }


                case 4:
            {
                companyWindow.addWorker();
                break;
            }
            case 5:

                companyWindow.findMaxReprimand();
                system("pause");
                        system("cls");
                break;
            case 6:
            {
                companyWindow.findMaxSalary();
                system("pause");
                system("cls");
            }
            case 0:
                system("cls");
                break;
            }

            break;
           case 0:
            loop = 0;


        }
    }

    return 0;

}

