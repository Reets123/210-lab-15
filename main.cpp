// Lab 15: Movie Class
// COMSC-210 - Ibrahim Alatig 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Movie {
private:
    string title;
    int yearReleased;
    string screenWriter;

public:
    // setters
    void setTitle(const string& t) {
        title = t;
    }

    void setYearReleased(int year){
        yearReleased = year;
    }

    void setScreenWriter(const string& writer) {
        screenWriter = writer;
    }

    // getters
    string getTitle() const{
        return title;
    }

    int getYearReleased() const{
        return
    }

    string getScreenWriter() const {
        return screenWriter;
    }

}