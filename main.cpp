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
        return yearReleased;
    }

    string getScreenWriter() const {
        return screenWriter;
    }

    // Print method
    void print() const {
        cout << "Movie: " << title << endl;
        cout << "    Year released: " << yearReleased << endl;
        cout << "    Screenwriter: " << screenWriter << endl;
    }
};

int main() {
    vector<Movie> movies;
    ifstream inputFile("input.txt");

    if (!inputFile) {
        cerr << "Cant open file, Check the files name" << endl;
        return 1;
    }

    string title;
    int year;
    string screenWriter;

    // Read data from file
    while (getline(inputFile, title) && inputFile >> year && inputFile.ignore() && 
getline(inputFile, screenWriter)) {
        Movie tempMovie;
        tempMovie.setTitle(title);
        tempMovie.setYearReleased(year);
        tempMovie.setScreenWriter(screenWriter);
        movies.push_back(tempMovie);
}

inputFile.close();