#include "Database.hpp"
#include <string>
#include <fstream>
#include <sstream>


using namespace std;


Database::Database(string path)
{
    this->path = path;
}


void Database::addSubject(string subject, float grade)
{
    ofstream writer(this->path, ios::app);

    writer << endl << subject << " " << grade;
}


void Database::addTest(string subject, string text, float grade, int points)
{
    ifstream reader(this->path);
    string line;
    string fileContent = "";

    while (getline(reader, line))
    {
        size_t found = line.find(subject);
        if (found != string::npos)
        {
            line += " " + text + " " + to_string(grade) + " " + to_string(points);
        }
        fileContent += line + "\n";
    }

    reader.close();

    ofstream writer(this->path);
    writer << fileContent;
    writer.close();
}


void Database::setGrade(string subject, float grade)
{
    ifstream reader(this->path);
    string line;
    string fileContent = "";

    while (getline(reader, line))
    {
        size_t found = line.find(subject);

        if (found != string::npos)
        {
            size_t gradeStart = line.find_last_of(" ") + 1;
            line = line.substr(0, gradeStart) + to_string(grade);
        }

        fileContent += line + "\n";
    }

    reader.close();

    ofstream writer(this->path);
    writer << fileContent;
    writer.close();
}


float Database::calculateAverage()
{
    ifstream reader(this->path);
    string line;
    float sum = 0.0;
    int count = 0;

    while (getline(reader, line))
    {
        istringstream iss(line);
        string subject;
        float grade;

        iss >> subject >> grade;

        sum += grade;
        count++;
    }

    reader.close();

    if (count == 0)
    {
        return 0.0;
    }

    return sum / count;
}


bool Database::isPositive()
{
    ifstream reader(this->path);
    string line;

    while (getline(reader, line))
    {
        istringstream iss(line);
        string subject;
        float grade;

        iss >> subject >> grade;

        if (grade >= 4.5)
        {
            reader.close();
            return false;
        }
    }
    reader.close();

    return true;
}


void Database::setPath(string path)
{
    this->path = path;
}
