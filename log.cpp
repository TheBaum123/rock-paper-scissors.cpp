#include <iostream>
#include <fstream>

using namespace std;

void log(string output, string usrInput, int usrInputNum, int cpuInputNum, string cpuInput) {
    ofstream logs;
    logs.open("logs.log");
    logs << "User Input: " << usrInput << endl << "Converted: " << usrInputNum << endl << "Computer Input: " << cpuInputNum << endl << "Converted: " << cpuInput << endl << endl << "Output: " << output;
    logs.close();
}