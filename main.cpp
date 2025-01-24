#include <iostream>
#include <cmath>
using namespace std;

// funtion declaration
int calcdaysOverdue(int dueDate, int returnDate){
    return returnDate - dueDate;
}
// function for calculating the fine
int calcFine(int daysOverdue){
    if(daysOverdue >= 1 && daysOverdue <= 7){
        return daysOverdue * 20;
    }
    else if(daysOverdue >= 8 && daysOverdue <= 14){
        return daysOverdue * 50;
    }
    else {
        return daysOverdue * 100;
    }
}

int main(){
	
	// declaration of variables
    string bookID;
    int dueDate, returnDate, daysOverdue, fine;
    
    // prompting the user to enter the bookID
    cout << "Enter the bookID: "<< endl;
    getline(cin, bookID);
    
    // prompting the user to enter the dueDate and returnDate
    cout<< "Enter the dueDate and the returnDate: "<< endl;
    cin>> dueDate >> returnDate;
    
    // function calling
    daysOverdue = calcdaysOverdue(dueDate, returnDate);
    fine = calcFine(daysOverdue);
    
    // outputting the information
    cout<< "\nBookID: " << bookID<< endl;
    cout<< "DueDate: " << dueDate<< endl;
    cout<< "ReturnDate: " << returnDate <<endl;
    cout<< "Days Overdue: " << daysOverdue <<endl;
    cout<< "Your fine is : Ksh"<< fine<< endl;
    
    return 0;
}
    
