#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <string>
#include <vector>

using namespace std;

class Database
{
private:
    string path;

public:
    Database(string path);

    void addSubject(string subject, float grade);
    void setGrade(string subject, float grade);
    void addTest(string subject, string text, float grade, int points);

    float calculateAverage();
    bool isPositive();

    void setPath(string path);
};

#endif
