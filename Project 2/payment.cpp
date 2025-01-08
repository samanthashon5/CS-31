//
//  payment.cpp
//  Project 2
//
//  Created by Samantha Shon on 1/23/24.
//UID: 506170927

#include <iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    string state, month;
    double payment, purchaseAmount;
    int day, year;
    
    //allow payment result to appear appropriately
    bool correctState, correctAmount, correctDay, correctMonth, correctYear;
    
    //initialize variables
    correctState = 0;
    correctAmount = 0;
    correctDay = 0;
    correctMonth = 0;
    correctYear = 0;
    payment = 0;
    purchaseAmount = 0;
    day = 0;
    year = 0;
    
    //allowed for two decimal places in total payment
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Prompts
    cout << "State Name: ";
    getline(cin,state);
    
    cout << "Purchase amount: ";
    cin >> purchaseAmount;
    
    cin.ignore(10000,'\n');
    cout << "Provide the month: ";
    getline(cin,month);
    
    cout << "Provide the day: ";
    cin >> day;
    
    cout << "Provide the year: ";
    cin >> year;
    
    //check state input
    if(state == "Alabama" || state == "Alaska" || state == "Arizona" || state == "Arkansas" || state == "California" || state == "Colorado" || state == "Connecticut" || state == "Delaware" || state == "Florida" || state == "Georgia" || state == "Hawaii" || state == "Idaho" || state == "Illinois" || state == "Indiana" || state == "Iowa" || state == "Kansas" || state == "Kentucky" || state == "Louisiana" || state == "Maine" || state == "Maryland" || state == "Massachusetts" || state == "Michigan" || state == "Minnesota" || state == "Mississippi" || state == "Missouri" || state == "Montana" || state == "Nebraska" || state == "Nevada" || state == "New Hampshire" || state == "New Jersey" || state == "New Mexico" || state == "New York" || state == "North Carolina" || state == "North Dakota" || state == "Ohio" || state == "Oklahoma" || state == "Oregon" || state == "Pennsylvania" || state == "Rhode Island" || state == "South Carolina" || state == "South Dakota" || state == "Tennessee" || state == "Texas" || state == "Utah" || state == "Vermont" || state == "Virginia" || state == "Washington" || state == "West Virginia" || state == "Wisconsin" || state == "Wyoming")
    {
        correctState = 1;
    }
    else {
        cout << "Invalid state!";
        return -1;
    }

    //check amount input
    if(purchaseAmount > 0.0)
    {
        correctAmount = 1;
    }
    else {
        cout << "Invalid amount!";
        return -1;
    }
    
    //check month input
    if(month == "January" || month == "February" || month == "March" || month == "April" || month == "May" || month == "June" || month == "July" || month == "August" || month == "September" || month == "October" || month == "November" || month == "December")
    {
        correctMonth = 1;
    }
    else {
        cout << "Invalid month!";
        return -1;
    }
    
    //check day input
    if(day >= 0 && day <= 31)
        // input "6" leads to invalid day
    {
        correctDay = 1;
    }
    else {
        cout << "Invalid day!";
        return -1;
    }
    
    //check year input
    if(year >= 1 && year <= 2025)
    {
        correctYear = 1;
    }
    else {
        cout << "Invalid year!";
        return -1;
    }
    
    //tax rate equations
    if(state == "Alabama")
    {
        payment = purchaseAmount * 1.04 + purchaseAmount * .0514;
        if(day >= 15 && day <= 17 && month == "July")
            payment = purchaseAmount;
    }
    
    if(state == "Alaska")
        payment = purchaseAmount * 1.0143;
    
    if(state == "Arizona")
        payment = purchaseAmount * 1.0560 + purchaseAmount * .0277;

    if(state == "Arkansas")
    {
        payment = purchaseAmount * 1.0650 + purchaseAmount * .0293;
        
        if(day >= 6 && day <= 7 && month == "August")
            payment = purchaseAmount;
    }
    
    if(state == "California")
        payment = purchaseAmount * 1.0725 + purchaseAmount * .0131 + 1;
    
    if(state == "Colorado")
        payment = purchaseAmount * 1.029 + purchaseAmount * .0473;
    
    if(state == "Connecticut")
    {
        payment = purchaseAmount * 1.0635;
        
        if (day >= 21 && day <= 27 && month == "August")
            payment = purchaseAmount;
    }
    
    if(state == "Florida")
        payment = purchaseAmount * 1.06 + purchaseAmount * .0105;
    
    if(state == "Georgia")
        payment = purchaseAmount * 1.04 + purchaseAmount * .0329;
    
    if(state == "Hawaii")
        payment = purchaseAmount * 1.04 + purchaseAmount * .0041;
    
    if(state == "Idaho")
        payment = purchaseAmount * 1.06 + purchaseAmount * .0003;
    
    if(state == "Illinois")
        payment = purchaseAmount * 1.0625 + purchaseAmount * .0249;
    
    if(state == "Indiana")
        payment = purchaseAmount * 1.07;
    
    if(state == "Iowa")
    {
        payment = purchaseAmount * 1.06 + purchaseAmount * .0082;
        
        if(day >= 5 && day <= 6 && month == "August")
            payment = purchaseAmount;
    }
    
    if(state == "Kansas")
        payment = purchaseAmount * 1.065 + purchaseAmount * .0217;
    
    if(state == "Kentucky")
        payment = purchaseAmount * 1.06;
    
    if(state == "Louisiana")
        payment = purchaseAmount * 1.0445 + purchaseAmount * .05;
    
    if(state == "Maine")
        payment = purchaseAmount * 1.055;
    
    if(state == "Maryland")
    {
        payment = purchaseAmount * 1.06;
        
        if(day >= 14 && day <= 20 && month == "August")
            payment = purchaseAmount;
    }
    
    if(state == "Massachusetts")
    {
        payment = purchaseAmount * 1.0625;
        
        if(day >= 14 && day <= 15 && month == "August")
            payment = purchaseAmount;
    }
    
    if(state == "Michigan")
        payment = purchaseAmount * 1.06;
    
    if(state == "Minnesota")
        payment = purchaseAmount * 1.0688 + purchaseAmount * .0055;
    
    if(state == "Mississippi")
    {
        payment = purchaseAmount * 1.07 + purchaseAmount * .0007;
        
        if(day >= 29 && day <= 30 && month == "July")
            payment = purchaseAmount;
    }
    
    if(state == "Missouri")
    {
        payment = purchaseAmount * 1.0423 + purchaseAmount * .039;
        
        if(day >= 19 && day <= 25 && month == "April")
            payment = purchaseAmount;
    }
    
    if(state == "Nebraska")
        payment = purchaseAmount * 1.055 + purchaseAmount * .0135;
    
    if(state == "Nevada")
        payment = purchaseAmount * .0685 + purchaseAmount * .0129;
    
    if(state == "New Jersey")
        payment = purchaseAmount * 1.0663 + purchaseAmount * (-.0003);
    
    if(state == "New Mexico")
        payment = purchaseAmount * 1.0513 + purchaseAmount * .0269;
    
    if(state == "New York")
        payment = purchaseAmount * 1.04 + purchaseAmount * .0449;
    
    if(state == "North Carolina")
        payment = purchaseAmount * 1.0475 + purchaseAmount * .0222;
    
    if(state == "North Dakota")
        payment = purchaseAmount * 1.05 + purchaseAmount * .0185;
    
    if(state == "Ohio")
        payment = purchaseAmount * 1.0575 + purchaseAmount * .0142;
    
    if(state == "Oklahoma")
    {
        payment = purchaseAmount * 1.045 + purchaseAmount * .0442;
        
        if(day >= 6 && day <= 8 && month == "August")
            payment = purchaseAmount;
    }
    
    if(state == "Pennsylvania")
        payment = purchaseAmount * 1.06 + purchaseAmount * .0034;
    
    if(state == "Rhode Island")
        payment = purchaseAmount * 1.07;
    
    if(state == "South Carolina")
        payment = purchaseAmount * 1.06 + purchaseAmount * .0143;
    
    if(state == "South Dakota")
        payment = purchaseAmount * 1.045 + purchaseAmount * .019;
    
    if(state == "Tennessee")
    {
        payment = purchaseAmount * 1.07 + purchaseAmount * .0247;
        if(day >= 29 && day <= 31 && month == "July")
            payment = purchaseAmount;
    }
    
    if(state == "Texas")
        payment = purchaseAmount * 1.0625 + purchaseAmount * .0194;
    
    if(state == "Utah")
        payment = purchaseAmount * 1.0595 + purchaseAmount * .0099 + 1.25;
    
    if(state == "Vermont")
        payment = purchaseAmount * 1.06 + purchaseAmount * .0018;
    
    if(state == "Virginia")
        payment = purchaseAmount * 1.053 + purchaseAmount * .0035 + 1;
    
    if(state == "Washington")
        payment = purchaseAmount * 1.065 + purchaseAmount * .0267;
    
    if(state == "West Virginia")
        payment = purchaseAmount * 1.06 + purchaseAmount * .0039;
    
    if(state == "Wisconsin")
        payment = purchaseAmount * 1.05 + purchaseAmount * .0044;
    
    if(state == "Wyoming")
        payment = purchaseAmount * 1.04 + purchaseAmount * .0136;
    
    // states with no taxes
    if(state == "Delaware" || state == "Montana" || state == "New Hampshire" || state == "Oregon")
        payment = purchaseAmount;
 
    // states with the same tax exemption day
    if((state == "Ohio" && day >= 5 && day <= 7 && month == "August")|| (state == "Nevada" && day >= 5 && day <= 7 && month == "August")|| (state == "South Carolina" && day >= 5 && day <= 7 && month == "August") || (state == "Texas"  && day >= 5 && day <= 7 && month == "August") || (state == "West Virginia" && day >= 5 && day <= 7 && month == "August"))
        payment = purchaseAmount;
    
    if (correctState && correctAmount && correctMonth && correctDay && correctYear)
    {
        cout << "Please pay a total of $" << payment << "\n";
    }
    
}


