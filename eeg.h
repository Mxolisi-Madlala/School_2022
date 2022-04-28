#include <vector>
#include <string>
#include <iosfwd>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <iterator>
#include <istream>
#include <map>
#include <list>
using namespace std;

istream_iterator<int> in();
struct vars;



class eeg
{
    private:
       

    public:
        eeg();
        //operator bool()(eeg a, eeg b);
        vector<double> readings;
        ~eeg();
         int eyestate;
};


struct vars : eeg{
    vector<double> readings;
    list<double> lineValues;
    
    double dtw(eeg a, eeg b){
        //return a.operator=(eeg (a.readings));
        return 0.0;    
    };
};

eeg::eeg(/* args */)
{
    eyestate = 0;
    
}

eeg::~eeg()
{
}

class mycomp : eeg {
    public:
        eeg q;
        mycomp(eeg q);
        bool operator()(eeg a, eeg b){
            vars v;
            if(v.dtw(q,a) < v.dtw(q,b))
            {
                return true;
            }

            return false;
        }
    private:


};


