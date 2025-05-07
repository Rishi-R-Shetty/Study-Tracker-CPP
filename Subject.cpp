#include "Subject.h"
#include <iostream>
using namespace std;

Subject::Subject(string name)
{
    this->name = name;
}
void Subject::addSession(const StudySession &session)
{
    sessions.push_back(session);
}

void Subject::showAllSessions()
{
    if (sessions.size() == 0)
    {
        cout << "No sessions found.\n";
    }
    cout << "Study Session for subject: " << name << "\n";
    for (const StudySession &s : sessions)
    {
        s.displaySession();
    }
}

int Subject::getTotalTime()
{
    int total = 0;
    for (const StudySession &s : sessions)
    {
        total += s.getDuration();
    }
    return total;
}

string Subject::getName()
{
    return name;
}

void Subject::setName(string name)
{
    this->name = name;
}
