#include <iostream>
#include "Subject.h"
#include "StudySession.h"

int main()
{
    Subject subject("DSA");

    // Add test sessions
    subject.addSession(StudySession("Trees", "2025-05-10", 90, "AVL and Red-Black"));
    subject.addSession(StudySession("Graphs", "2025-05-11", 60, "DFS/BFS"));

    std::cout << "\n🔽 Display before saving:\n";
    subject.showAllSessions();

    // Save to file
    subject.saveToFile("sessions.txt");

    // Create new subject to simulate fresh start
    Subject loaded("DSA");

    // Load from file
    loaded.loadFromFile("sessions.txt");

    std::cout << "\n📁 Display after loading:\n";
    loaded.showAllSessions();

    return 0;
}
