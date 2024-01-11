#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

// Define a structure for book records
struct Book {
    string title;
    string author;
    int year = 0;
    double price = 0;
};

typedef struct CricketPlayer {
    string name;
    int totalRuns = 0;
    int totalInnings = 0;
    int timesNotOut = 0;
    double average = 0; // Added field to store the average
} cp;

// Function to read data for a cricket player
void readPlayerData(cp& player);

// Function to display data for a cricket player
void displayPlayerData(const cp& player);

// Function to input details of a book
Book inputBookDetails(Book book, int bookNumber);

// Function to display book records in table format
void displayBookRecords(Book books[], int numBooks);

int main() {
    const int numBooks = 2;
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
    cout << endl << endl;

    Book books[numBooks];

    // Input details for each book using the function
    for (int i = 0; i < numBooks; ++i) {
        books[i] = inputBookDetails(books[i], i + 1);
        cout << endl; // Add a newline for better readability
    }

    // Display the stored book records in table format
    cout << "Book Records:\n";
    // Display table header
    cout << setw(15) << left << "Title"
        << setw(23) << left << "Author"
        << setw(15) << left << "Year"
        << setw(2) << left << "Price" << endl;
    displayBookRecords(books, numBooks);

    return 0;
}



// Function to read data for a cricket player
void readPlayerData(cp& player) {
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
void displayPlayerData(const cp& player) {
    cout << setw(20) << player.name << setw(15) << player.totalRuns << setw(15) << player.totalInnings;
    cout << setw(15) << player.timesNotOut << setw(15) << fixed << setprecision(2) << player.average << endl;
}



// Function to input details of a book
// Here we use the function pass by value so the function inputBookDetails returns the value of book
Book inputBookDetails(Book book, int bookNumber) {
    cout << "Enter details for Book " << bookNumber << ":\n";
    cout << "Enter book title: ";
    getline(cin, book.title);

    cout << "Enter author name: ";
    getline(cin, book.author);

    cout << "Enter publication year: ";
    cin >> book.year;

    cout << "Enter price: ";
    cin >> book.price;

    // Clear the input buffer
    cin.ignore();

    return book;
}

// Function to display book records in table format
void displayBookRecords(Book books[], int numBooks) {

    // Display each book's record
    for (int i = 0; i < numBooks; ++i) {
        cout << setw(15) << left << books[i].title
            << setw(23) << left << books[i].author
            << setw(15) << left << books[i].year
            << setw(2) << left << "$" << fixed << setprecision(2) << books[i].price << endl;
    }
}