#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>
#include <vector>
#include "StudySession.h"
using namespace std;

class Subject
{
private:
    string name;
    vector<StudySession> sessions;

public:
    Subject(string name);
    void addSession(const StudySession &session);
    void showAllSessions();
    int getTotalTime();
    string getName();
    void setName(string name);
    void saveToFile(const std::string &filename) const;
    void loadFromFile(const std::string &filename);
};
#endif
