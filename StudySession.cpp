#include "StudySession.h"
#include <iostream>
using namespace std;

StudySession::StudySession(string topic, string date, int duration, string notes)
{
    this->topic = topic;
    this->date = date;
    this->duration = duration;
    this->notes = notes;
}
string StudySession::getTopic() const
{
    return topic;
}
string StudySession::getDate() const
{
    return date;
}

int StudySession::getDuration() const
{
    return duration;
}

string StudySession::getNotes() const
{
    return notes;
}

void StudySession::setTopic(string topic)
{
    this->topic = topic;
}
void StudySession::setDate(string date)
{
    this->date = date;
}

void StudySession::setDuration(int duration)
{
    if (duration >= 0)
        this->duration = duration;
    else
        cout << "Invalid duration. Must be non-negative.\n";
}
void StudySession::setNotes(string notes)
{
    this->notes = notes;
}
void StudySession::displaySession() const
{
    cout << "------------------------------\n";
    cout << "📚 Topic: " << topic << "\n";
    cout << "📅 Date: " << date << "\n";
    cout << "⏱ Duration: " << duration << " minutes\n";
    cout << "📝 Notes: " << notes << "\n";
    cout << "------------------------------\n";
}