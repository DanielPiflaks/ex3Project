/******************************************
Student name: Daniel Piflaks
Student ID: 311322986
Course Exercise Group: 05
Exercise name: Ex2
******************************************/

#ifndef EX2_BOARDCOORDINATES_H
#define EX2_BOARDCOORDINATES_H

using namespace std;
#include <iostream>

class BoardCoordinates {
public:
    //Board Coordinates default constructor.
    BoardCoordinates(){};
    //Board Coordinates constructor.
    BoardCoordinates(int const row, int const column);
    //Overload > operator.
    bool operator>(const BoardCoordinates &boardCoordinates) const;
    //Overload < operator.
    bool operator<(const BoardCoordinates &boardCoordinates) const;
    //Overload == operator.
    bool operator==(const BoardCoordinates &boardCoordinates) const;
    //Overload << operator.
    friend ostream& operator << (ostream & OS,const BoardCoordinates & BC);

    //Returns row parameter.
    int getRow() const;
    //Returns column parameter.
    int getColumn() const;
private:
    int row;
    int column;

};


#endif //EX2_BOARDCOORDINATES_H
