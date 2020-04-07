// Assignment5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CPUScheduler.h"
int main()
{
    vector<Process> processList;

        /*{
            Process(5,5.0,3.2,"abc"),
            Process(5,5.0,3.2,"abc"),
            Process(5,5.0,3.2,"abc"),
            Process(5,5.0,3.2,"abc"),
            Process(5,5.0,3.2,"abc")
        };
        */
    processList.push_back(Process(1, 5.0, 0.0, "a"));
    processList.push_back(Process(2, 7.0, 0.0, "b"));
    processList.push_back(Process(3, 18.0, 0.0, "c"));
    processList.push_back(Process(4, 11.0, 0.0, "d"));
    processList.push_back(Process(5, 13.0, 0.0, "e"));
    CPUScheduler cpuS(processList);
    cout << "first-come-first-serve: " << endl;
    cpuS.FCFS();
    cpuS.print();
    cout << endl;
    cout << "SJF :" << endl;
    cpuS.SJF();
    cpuS.print();
    cout << endl;
    cout << "Priority :" << endl;
    cpuS.Priority();
    cpuS.print();
    cout << endl;
    cout << "RR :" << endl;
    cpuS.RR(0.5);
    cout << endl;

    return 0;
}

