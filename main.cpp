#include <iostream>
#include <vector>
#include <ctime>
using namespace std;


class ClaimDataFromSource{
private:
    vector<vector<string,string,time_t,time_t>> data; /*   earth base name,
                                                           sattelite name,
                                                           start time,
                                                           end time*/
public:
    void addEntry(vector<string,string,time_t,time_t> entry){
        data.push_back(entry);
    }
    void parseData(string data);
};

class EarthBase{
private:
    bool maintance;
    bool isUsing;
    time_t maintanceEnding;
    vector<vector<string,time_t,time_t>> satellitesInRadiovision;

public:
    time_t timeInRadiovision(string satelliteName); /*return current/closest
                                                      time interval*/
    time_t timeToChoseSatellite(string satelliteName); /*return time to change
                                                         target*/
    bool isUsing(){
        return isUsing;
    }
    bool onMaintance(){
        return maintance;
    }
};

class Satellite{
private:
    string satelliteName;
    //enum informationType{};
    //enum dataType{};
    //enum modeType{};

public:
    string getName(){
        return satelliteName;
    }
};

int main(int argc, char *argv[])
{

}
