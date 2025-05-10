#include "Subject.h"
#include <iostream>
#include <fstream>
#include <sstream>
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

void Subject::saveToFile(const std::string &filename) const
{
    std::ofstream out(filename);
    if (!out)
    {
        std::cout << "Error opening file\n";
        return;
    }

    out << name << "\n"; // optional: save subject name first

    for (const StudySession &s : sessions)
    {
        out << s.getTopic() << ","
            << s.getDate() << ","
            << s.getDuration() << ","
            << s.getNotes() << "\n";
    }

    out.close();
    std::cout << "✅ Saved successfully to " << filename << "\n";
}

void Subject::loadFromFile(const std::string &filename)
{
    std::ifstream in(filename);
    if (!in)
    {
        std::cout << "Error opening file .\n";
        return;
    }
    sessions.clear();
    std::string line;
    std::getline(in, name);
    while (getline(in, line))
    {
        std::stringstream ss(line);
        std::string topic, date, durationStr, notes;
        std::getline(ss, topic, ',');
        std::getline(ss, date, ',');
        std::getline(ss, durationStr, ',');
        std::getline(ss, notes);

        int duration = std::stoi(durationStr);
        StudySession session(topic, date, duration, notes);

        sessions.push_back(session);
    }
    in.close();
    std::cout << "✅ Loaded successfully from " << filename << "\n";
}