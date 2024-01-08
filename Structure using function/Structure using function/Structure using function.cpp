#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

typedef struct CricketPlayer {
    string name;
    int totalRuns;
    int totalInnings;
    int timesNotOut;
    double average; // Added field to store the average
} cp;

// Function to read data for a cricket player
void readPlayerData(cp &player) {
    cout << "Enter details for Cricket Player:\n";
    cout << "Name: ";
    getline(cin >> ws, player.name);
    cout << "Total Runs: ";
    cin >> player.totalRuns;
    cout << "Total Innings: ";
    cin >> player.totalInnings;
    cout << "Times Not Out: ";
    cin >> player.timesNotOut;

    // Calculate average
    player.average = static_cast<double>(player.totalRuns) / player.totalInnings;

    cout << endl;
}

// Function to display data for a cricket player
void displayPlayerData(const cp &player) {
    cout << setw(20) << player.name << setw(15) << player.totalRuns << setw(15) << player.totalInnings;
    cout << setw(15) << player.timesNotOut << setw(15) << fixed << setprecision(2) << player.average << endl;
}

int main() {
    cp players[5];

    // Input data for each cricket player
    for (int i = 0; i < 5; ++i) {
        readPlayerData(players[i]);
    }

    // Display the information and average for each cricket player
    cout << "\nCricket Player Information and Average:\n";
    cout << setw(20) << "Name" << setw(15) << "Total Runs" << setw(15) << "Total Innings" << setw(15) << "Times Not Out" << setw(15) << "Average" << endl;
    cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;

    for (int i = 0; i < 5; ++i) {
        displayPlayerData(players[i]);
    }

    return 0;
}
