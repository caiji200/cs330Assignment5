#include "Process.h"
Process::Process() {
	Priority = 0;
	processingTime = 0.0;
	burstTime = 0.0;
	processName = "";
};
Process::Process(int myPriority, float myProcessingTime, float myBurstTime, string myProcessName) {
	this->Priority = myPriority;
	this->processingTime = myProcessingTime;
	this->burstTime = myBurstTime;
	this->processName = myProcessName;
};
void Process::setProcessingTime(float myProcessingTime) {
	processingTime = myProcessingTime;
};
float Process::getProcessingTime() {
	return processingTime;
};
float Process::getBurstTime() {
	return burstTime;
}
void Process::changeProcessingTime(float newProssingTime)
{
	processingTime = newProssingTime;
};
void Process::incrementBurstTime(float newBurstTime) {
	burstTime += newBurstTime;
};
void Process::setPriority(int myPriority) {
	Priority = myPriority;
};
int Process::getPriority() {
	return Priority;
};
void Process::changePriority(int newPriority) {
	Priority = newPriority;
};
string Process::getProcessName() {
	return processName;
};
void Process::printProcee() {
	cout <<"Priority: "<<Priority << endl;	
	cout <<"Processingtime: " << processingTime << endl;
	cout <<"Bursttime: " << burstTime << endl;
	cout <<"ProcessName: "<<processName <<endl;
};
Process& Process::operator= (const Process& other) {
	this->processName = other.processName;
	this->burstTime = other.burstTime;
	this->Priority = other.Priority;
	this -> processingTime = other.processingTime;
	return *this;
}