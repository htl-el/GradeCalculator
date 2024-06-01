#include "Database.hpp"
#include <string>
#include <fstream>

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
