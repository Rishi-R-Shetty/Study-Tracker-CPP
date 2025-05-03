#include <iostream>
#include "StudySession.h"
using namespace std;

class StudySession
{
private:
    string topic;
    string date;
    int duration;
    string notes;

public:
    StudySession(string topic, string date, int duration, string notes)
    {
        this->topic = topic;
        this->date = date;
        this->duration = duration;
        this->notes = notes;
    }
};