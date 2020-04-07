#pragma once
#include<vector>
#include"Process.h"
class CPUScheduler
{
private:
	vector<Process> ProcessOrder;
public:
	CPUScheduler();
	CPUScheduler(vector<Process>);
	void print();
	void FCFS();
	void SJF();
	void RR(float);
	void Priority();
	Process getProcess(int);
	Process getFirstProcess();
};

