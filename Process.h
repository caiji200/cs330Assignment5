#pragma once
#include<string>
#include<iostream>
using namespace std;


class Process
{
private:
	int Priority;
	float processingTime;
	float burstTime;
	string processName;

public:
	Process();
	Process(int, float, float, string);
	void setProcessingTime(float);
	float getProcessingTime();
	float getBurstTime();
	void changeProcessingTime(float);
	void incrementBurstTime(float);
	void setPriority(int);
	int getPriority();
	void changePriority(int);
	string getProcessName();
	void printProcee();
	Process& operator= (const Process &other);
};

