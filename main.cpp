#include <iostream>
#include "Subject.h"
#include "StudySession.h"
using namespace std;

int main()
{
    Subject subject("Maths");
    int choice;

    while (true)
    {
        cout << "\n Study Tracker Menu\n";
        cout << "1. Add Session\n";
        cout << "2. Show all sessions\n";
        cout << "3. Get total study time\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            string topic, date, notes;
            int duration;
            cout << "Enter topic: ";
            getline(cin, topic);

            cout << "Enter Date (YYYY-MM-DD): ";
            getline(cin, date);

            cout << "Enter duration (minutes)";
            cin >> duration;
            cin.ignore();

            cout << "Enter notes: ";
            getline(cin, notes);

            StudySession session(topic, date, duration, notes);
            subject.addSession(session);
            cout << "✅ Session added!\n";
            break;
        }
        case 2:
            subject.showAllSessions();
            break;

        case 3:
            cout << "Total Time" << subject.getTotalTime() << "minutes\n";
            break;

        case 4:
            cout << "BYEEEE QTU\n";
            return 0;

        default:
            cout << "BRUH!!!";
        }
    }
    return 0;
}
