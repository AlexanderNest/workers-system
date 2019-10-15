#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include <string>


class Director
{
private:
    std::string name = "", name2 = "", name3 = ""; // F I O
    int bDay, bMonth, bYear;
    int sDay, sMonth, sYear;
public:

    void setAll(std::string name, std::string name2, std::string name3, int bDay,int dMonth,int bYear,int sDay,int sMonth,int sYear);

    std::string getName();
    void getDirector();

    void setName(std::string name, std::string name2, std::string name3);

    void changeData();

    int getDay();
    int getMonth();
    int getYear();




};

#endif // DIRECTOR_HPP
