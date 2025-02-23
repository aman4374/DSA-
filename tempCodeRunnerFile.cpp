#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // Read the initial balance
    int initialBalance;
    cin >> initialBalance;

    // Read the number of operations
    int numOperations;
    cin >> numOperations;

    // Variables to track balance and history
    int currentBalance = initialBalance;
    vector<int> transactionHistory; // Stores amounts of uncommitted transactions
    vector<int> commitHistory;      // Stores committed balance snapshots

    // Process each operation
    for (int i = 0; i < numOperations; i++) {
        string operationLine;
        cin.ignore(); // To handle newlines in the input
        getline(cin, operationLine);

        stringstream ss(operationLine);
        string operation;
        ss >> operation;

        if (operation == "read") {
            cout << currentBalance << endl;
        } 
        else if (operation == "credit" || operation == "debit") {
            int amount;
            ss >> amount;

            if (operation == "credit") {
                currentBalance += amount;
                transactionHistory.push_back(amount); // Positive for credit
            } else { // "debit"
                if (currentBalance >= amount) {
                    currentBalance -= amount;
                    transactionHistory.push_back(-amount); // Negative for debit
                } else {
                    cerr << "Error: Insufficient balance for debit!" << endl;
                }
            }
        } 
        else if (operation == "abort") {
            int transactionIndex;
            ss >> transactionIndex;

            if (transactionIndex <= transactionHistory.size()) {
                int transaction = transactionHistory[transactionIndex - 1];
                currentBalance -= transaction; // Reverse the transaction
                transactionHistory.erase(transactionHistory.begin() + transactionIndex - 1);
            } else {
                cerr << "Error: Cannot abort committed transaction!" << endl;
            }
        } 
        else if (operation == "rollback") {
            int commitIndex;
            ss >> commitIndex;

            if (commitIndex <= commitHistory.size()) {
                currentBalance = commitHistory[commitIndex - 1];
                transactionHistory.clear(); // Clear all uncommitted transactions
                // Remove later commits if necessary
                commitHistory.resize(commitIndex);
            } else {
                cerr << "Error: Invalid rollback index!" << endl;
            }
        } 
        else if (operation == "commit") {
            commitHistory.push_back(currentBalance);
            transactionHistory.clear(); // Clear all uncommitted transactions
        }
    }

    return 0;
}
