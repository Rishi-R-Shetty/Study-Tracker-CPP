#ifndef STUDYSESSION_H
#define STUDYSESSION_H

#include <string>
using namespace std;

class StudySession
{
private:
    string topic;
    string date;
    int duration;
    string notes;

public:
    StudySession(string topic, string date, int duration, string notes);

    int getDuration() const;
    string getTopic() const;
    string getDate() const;
    string getNotes() const;
    void setTopic(string topic);
    void setDate(string date);
    void setDuration(int duration);
    void setNotes(string notes);

    void displaySession() const;
};

#endif
