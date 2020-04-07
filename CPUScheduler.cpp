#include "CPUScheduler.h"
CPUScheduler::CPUScheduler() {
	vector<Process> incomeProcess;
	ProcessOrder = incomeProcess;
}
CPUScheduler::CPUScheduler(vector<Process> incomeProcess) {
	ProcessOrder = incomeProcess;
}
void CPUScheduler::print() {
	for (unsigned int i = 0; i < ProcessOrder.size(); i++)
		ProcessOrder[i].printProcee();
}
void CPUScheduler::FCFS() {

}
void CPUScheduler::SJF() {
	for (unsigned int i = 1; i < ProcessOrder.size(); i++) {

		for (unsigned int j = i; j < ProcessOrder.size()-1; j++) {
			if (ProcessOrder[j].getProcessingTime() > ProcessOrder[j + 1].getProcessingTime())
				swap(ProcessOrder[j], ProcessOrder[j + 1]);
		}
		

	}
}
void CPUScheduler::RR(float timeQuantum) {
	while (ProcessOrder.size() != 0) {
		Process p = ProcessOrder.front();
		ProcessOrder.erase(ProcessOrder.begin());
		p.incrementBurstTime(timeQuantum);
		if (p.getProcessingTime() > p.getBurstTime()) {
			ProcessOrder.push_back(p);
			p.printProcee();
		}

	}
}
void CPUScheduler::Priority() {
	for (unsigned int i = 1; i < ProcessOrder.size(); i++) {

		for (unsigned int j = i; j < ProcessOrder.size() - 1; j++) {
			if (ProcessOrder[j].getPriority() > ProcessOrder[j + 1].getPriority())
				swap(ProcessOrder[j], ProcessOrder[j + 1]);
		}
	}
}

Process getProcess(int) {
	return Process();
}
Process getFirstProcess() {
	return Process();
}
void swap(Process& p1, Process& p2) {
	Process p3;
	p3 = p2;
	p2 = p1;
	p1 = p3;
}