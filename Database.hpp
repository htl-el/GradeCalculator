#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <string>
#include <vector>

using namespace std;

class Database
{
private:
    string path;
    vector<string> Subjects;
    vector<float> Grades;

public:
    Database(string path);

    void addSubject(string subject, float grade);
    void setGrade(string subject, float grade);
    void addTest(string subject, string name, float points);

    void writeFile();
    void readFile(string path);

    float calculateAverage();
    bool isPositive();

    void setPath(string path);
};

#endif
