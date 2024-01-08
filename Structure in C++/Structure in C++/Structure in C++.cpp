#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct CricketPlayer {
    string name;
    int totalRuns;
    int totalInnings;
    int timesNotOut;
    double average; // Added field to store the average
};

int main() {
    CricketPlayer players[5];

    // Input data for each cricket player
    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for Cricket Player " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin >> ws, players[i].name);
        cout << "Total Runs: ";
        cin >> players[i].totalRuns;
        cout << "Total Innings: ";
        cin >> players[i].totalInnings;
        cout << "Times Not Out: ";
        cin >> players[i].timesNotOut;

        // Calculate average
        players[i].average = static_cast<double>(players[i].totalRuns) / players[i].totalInnings;

        cout << endl;
    }

    // Display the information and average for each cricket player
    cout << "\nCricket Player Information and Average:\n";
    cout << setw(20) << "Name" << setw(15) << "Total Runs" << setw(15) << "Total Innings" << setw(15) << "Times Not Out" << setw(15) << "Average" << endl;
    cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;

    for (int i = 0; i < 5; ++i) {
        cout << setw(20) << players[i].name << setw(15) << players[i].totalRuns << setw(15) << players[i].totalInnings;
        cout << setw(15) << players[i].timesNotOut << setw(15) << fixed << setprecision(2) << players[i].average << endl;
    }

    return 0;
}
