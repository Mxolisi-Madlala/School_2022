#include "eeg.h"
#include <iostream>
#include <iosfwd>
#include <fstream>
#include <bits/algorithmfwd.h>
#include <algorithm>
using namespace std;


int main()
{
    ifstream infile("EEGEyeState.arff.txt");
    string line = "";
    int lineNumber = 0;
    eeg a;
    eeg b;
    vector<string> d;

    while (getline(infile, line)) 
    {
        

        if(line[0] != '@'){
            stringstream ss(line);
            while(ss.good())
            {
               // vector<string> d;
                string newstring;
                getline(ss,newstring, ',');
                d.push_back(newstring);    
                
            }
            
            lineNumber += 1;
        }
        
    }


    string x[d.size()];

    for(size_t i = 0; i < d.size(); i++)
    {
        
        //cout << d.at(i) << endl;
        x[i] = d.at(i);
        //a.readings.push_back(
        
        //cout << x[i] << endl;

        stringstream ss;
        double tr;
        ss << x[i];
        ss >> tr;
        
        a.readings.push_back(tr);
        
    }
    cout << "after putting shit" << endl;
    for(size_t x = 0; x < a.readings.size(); x++)
    {
        cout << a.readings.at(x) << endl;
    }
    cout << d.size() << endl;   
    cout << lineNumber <<endl;
}