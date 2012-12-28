#include <sys/types.h>
#include <sys/time.h>
#include <iostream>
#include <sstream>
#include <string>
#include <tr1/unordered_map>
#include <iterator>

using namespace std;
using namespace std::tr1;

class RunTime {
    public:
        RunTime() {
            gettimeofday(&m_first,NULL); 
        };
        string TimeFormat(const double NumSeconds) const;
        double TotalSeconds() const;
        double TotalMilliSeconds() const;
        double TotalMicroSeconds() const;

        friend ostream& operator<<(ostream& ros, const RunTime &rTime);
    protected:
        timeval m_first;
};

string RunTime::TimeFormat(const double NumSeconds) const
{
    stringstream line;
    const long BSIZE = 100;
    char buf[BSIZE];
    // if (NumSeconds > 1.0) {
    //     double total_seconds = NumSeconds;
    //     long minutes = (long)total_seconds / 60;
    //     long hours = minutes / 60;
    //     minutes = minutes - hours * 60;
    //     double seconds = total_seconds - minutes * 60 - hours * 3600;
    //     if (hours) sprintf(buf,"%ld:%2.2ld:%5.3f",hours,minutes,seconds);
    //     else if (minutes) sprintf(buf,"%2.2ld:%5.3f",minutes,seconds);
    //     else sprintf(buf,"%5.3f seconds",seconds);
    // }
    // else {
    double milliSeconds = NumSeconds * 1000.0;
    sprintf(buf,"\"duration\": %5.3f ",milliSeconds);

    return buf;
}

double RunTime::TotalSeconds() const
{
    timeval val;
    gettimeofday(&val,NULL);
    double dSec = val.tv_sec - m_first.tv_sec;
    double dMicroSec = val.tv_usec - m_first.tv_usec;
    return (dSec + (dMicroSec/1e6) );
}

double RunTime::TotalMilliSeconds() const
{
    return (TotalSeconds() * 1000);
}

double RunTime::TotalMicroSeconds() const
{
    return (TotalSeconds() * 1e6);
}

ostream& operator<<( ostream& ros, const RunTime &rTime) 
{
    ros << rTime.TimeFormat(rTime.TotalSeconds());
    return ros;
}


const int uSecSleep = 10000;
int one()           { usleep(uSecSleep); return atol("1"); }
int two()           { usleep(uSecSleep); return atol("2"); }
int three()         { usleep(uSecSleep); return atol("3"); }
int four()          { usleep(uSecSleep); return atol("4"); }
int five()          { usleep(uSecSleep); return atol("5"); }
int six()           { usleep(uSecSleep); return atol("6"); }
int seven()         { usleep(uSecSleep); return atol("7"); }
int eight()         { usleep(uSecSleep); return atol("8"); }
int nine()          { usleep(uSecSleep); return atol("9"); }
int ten()           { usleep(uSecSleep); return atol("10");}
int eleven()        { usleep(uSecSleep); return atol("11");}
int twelve()        { usleep(uSecSleep); return atol("12");}
int thirteen()      { usleep(uSecSleep); return atol("13");}
int fourteen()      { usleep(uSecSleep); return atol("14");}
int fifteen()       { usleep(uSecSleep); return atol("15");}
int sixteen()       { usleep(uSecSleep); return atol("16");}
int seventeen()     { usleep(uSecSleep); return atol("17");}
int eighteen()      { usleep(uSecSleep); return atol("18");}
int nineteen()      { usleep(uSecSleep); return atol("19");}
int twenty()        { usleep(uSecSleep); return atol("20");}
int twentyone()     { usleep(uSecSleep); return atol("21");}
int twentytwo()     { usleep(uSecSleep); return atol("22");}
int twentythree()   { usleep(uSecSleep); return atol("23");}
int twentyfour()    { usleep(uSecSleep); return atol("24");}
int twentyfive()    { usleep(uSecSleep); return atol("25");}
int twentysix()     { usleep(uSecSleep); return atol("26");}
int twentyseven()   { usleep(uSecSleep); return atol("27");}
int twentyeight()   { usleep(uSecSleep); return atol("28");}
int twentynine()    { usleep(uSecSleep); return atol("29");}
int thirty()        { usleep(uSecSleep); return atol("30");}


int ifElseBlock(const string &check){
    if (check == "one") {
        return one();
    }
    else if (check == "two") {
        return two();
    }
    else if (check == "three") {
        return three();
    }
    else if (check == "four") {
        return four();
    }
    else if (check == "five") {
        return five();
    }
    else if (check == "six") {
        return six();
    }
    else if (check == "seven") {
        return seven();
    }
    else if (check == "eight") {
        return eight();
    }
    else if (check == "nine") {
        return nine();
    }
    else if (check == "ten") {
        return ten();
    }
    else if (check == "eleven") {
        return eleven();
    }
    else if (check == "twelve") {
        return twelve();
    }
    else if (check == "thirteen") {
        return thirteen();
    }
    else if (check == "fourteen") {
        return fourteen();
    }
    else if (check == "fifteen") {
        return fifteen();
    }
    else if (check == "sixteen") {
        return sixteen();
    }
    else if (check == "seventeen") {
        return seventeen();
    }
    else if (check == "eighteen") {
        return eighteen();
    }
    else if (check == "nineteen") {
        return nineteen();
    }
    else if (check == "twenty") {
        return twenty();
    }
    else if (check == "twentyone") {
        return twentyone();
    }
    else if (check == "twentytwo") {
        return twentytwo();
    }
    else if (check == "twentythree") {
        return twentythree();
    }
    else if (check == "twentyfour") {
        return twentyfour();
    }
    else if (check == "twentyfive") {
        return twentyfive();
    }
    else if (check == "twentysix") {
        return twentysix();
    }
    else if (check == "twentyseven") {
        return twentyseven();
    }
    else if (check == "twentyeight") {
        return twentyeight();
    }
    else if (check == "twentynine") {
        return twentynine();
    }
    else if (check == "thirty") {
        return thirty();
    }
}

typedef int func_t();
unordered_map<string, func_t*> FHASH;
void initFHASH() {
    if (!FHASH.size()) {
        FHASH["one"]            = one;
        FHASH["two"]            = two;
        FHASH["three"]          = three;
        FHASH["four"]           = four;
        FHASH["five"]           = five;
        FHASH["six"]            = six;
        FHASH["seven"]          = seven;
        FHASH["eight"]          = eight;
        FHASH["nine"]           = nine;
        FHASH["ten"]            = ten;
        FHASH["eleven"]         = eleven;
        FHASH["twelve"]         = twelve;
        FHASH["thirteen"]       = thirteen;
        FHASH["fourteen"]       = fourteen;
        FHASH["fifteen"]        = fifteen;
        FHASH["sixteen"]        = sixteen;
        FHASH["seventeen"]      = seventeen;
        FHASH["eighteen"]       = eighteen;
        FHASH["nineteen"]       = nineteen;
        FHASH["twenty"]         = twenty;
        FHASH["twentyone"]      = twentyone;
        FHASH["twentytwo"]      = twentytwo;
        FHASH["twentythree"]    = twentythree;
        FHASH["twentyfour"]     = twentyfour;
        FHASH["twentyfive"]     = twentyfive;
        FHASH["twentysix"]      = twentysix;
        FHASH["twentyseven"]    = twentyseven;
        FHASH["twentyeight"]    = twentyeight;
        FHASH["twentynine"]     = twentynine;
        FHASH["thirty"]         = thirty;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "usage: " << argv[0] << " numCalls\n";
        exit(1);
    }
    initFHASH();
    int numCalls = atol(argv[1]), i;
    int sum = 0;
    RunTime t1;
    for (i=0;i < numCalls;i++) {
        sum += ifElseBlock("one");
        sum += ifElseBlock("two");
        sum += ifElseBlock("three");
        sum += ifElseBlock("four");
        sum += ifElseBlock("five");
        sum += ifElseBlock("six");
        sum += ifElseBlock("seven");
        sum += ifElseBlock("eight");
        sum += ifElseBlock("nine");
        sum += ifElseBlock("ten");
        sum += ifElseBlock("eleven");
        sum += ifElseBlock("twelve");
        sum += ifElseBlock("thirteen");
        sum += ifElseBlock("fourteen");
        sum += ifElseBlock("fifteen");
        sum += ifElseBlock("sixteen");
        sum += ifElseBlock("seventeen");
        sum += ifElseBlock("eighteen");
        sum += ifElseBlock("nineteen");
        sum += ifElseBlock("twenty");
        sum += ifElseBlock("twentyone");
        sum += ifElseBlock("twentytwo");
        sum += ifElseBlock("twentythree");
        sum += ifElseBlock("twentyfour");
        sum += ifElseBlock("twentyfive");
        sum += ifElseBlock("twentysix");
        sum += ifElseBlock("twentyseven");
        sum += ifElseBlock("twentyeight");
        sum += ifElseBlock("twentynine");
        sum += ifElseBlock("thirty");
    }
    cout << t1 << " sum " << sum << endl;
    sum = 0;
    RunTime t2;
    for (i=0;i < numCalls;i++) {
        sum += (FHASH["one"])();
        sum += (FHASH["two"])();
        sum += (FHASH["three"])();
        sum += (FHASH["four"])();
        sum += (FHASH["five"])();
        sum += (FHASH["six"])();
        sum += (FHASH["seven"])();
        sum += (FHASH["eight"])();
        sum += (FHASH["nine"])();
        sum += (FHASH["ten"])();
        sum += (FHASH["eleven"])();
        sum += (FHASH["twelve"])();
        sum += (FHASH["thirteen"])();
        sum += (FHASH["fourteen"])();
        sum += (FHASH["fifteen"])();
        sum += (FHASH["sixteen"])();
        sum += (FHASH["seventeen"])();
        sum += (FHASH["eighteen"])();
        sum += (FHASH["nineteen"])();
        sum += (FHASH["twenty"])();
        sum += (FHASH["twentyone"])();
        sum += (FHASH["twentytwo"])();
        sum += (FHASH["twentythree"])();
        sum += (FHASH["twentyfour"])();
        sum += (FHASH["twentyfive"])();
        sum += (FHASH["twentysix"])();
        sum += (FHASH["twentyseven"])();
        sum += (FHASH["twentyeight"])();
        sum += (FHASH["twentynine"])();
        sum += (FHASH["thirty"])();
        
    }
    cout << t2 << " sum " << sum << endl;


    return 0;
}