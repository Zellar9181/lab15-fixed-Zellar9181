/*******************************************************************
* getInfo *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
*******************************************************************/
void getInfo(int & pickFrom, int & numPicks){   
    pickFrom = 0;
    cout << "How many balls (1-12) are in the pool to pick from?";
    while((pickFrom < 1) or (pickFrom > 12)){
    while(!(cin >>pickFrom)){
        cout << "Input Error! There must be between 1 and 12 balls."<< endl;
        cout << "How many balls (1-12) are in the pool to pick from?";
        cin.clear();
        cin.ignore(123, '\n');
    }
    }
    
    numPicks = 0;
    cout << "How many balls (1-"<< pickFrom <<") will be drawn?";
    while((numPicks < 1) or (numPicks > pickFrom)){
    while(!(cin >>numPicks)){
        cout << "Input Error!"<< endl;
        cout << "How many balls (1-"<< pickFrom <<") will be drawn?";
        cin.clear();
        cin.ignore(123, '\n');
    }
    }
    return numPicks;
}

/******************************************************************
* computeWays                                                     *
* Computes and returns the number of different possible sets      *
* of k numbers that can be chosen from a set of n numbers.        *
* The formula for this is     k!(n- k)!                           *
*                             --------                            *
*                                 n!                              *
*******************************************************************/
// Note that the computation is done in a way that does not require
// multiplying two factorials together. This is done to prevent any
// intermediate result becoming so large that it causes overflow.
double computeWays(int n, int k){
    
}

// This function computes factorials recursively. It is called by computeWays.
double factorial(int n){

}
