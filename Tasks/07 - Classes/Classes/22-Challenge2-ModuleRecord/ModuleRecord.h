#pragma once
#include <iostream>
using namespace std;

class ModuleRecord
{
private:
	string recordModuleName;
	string recordSubjectArea;
	unsigned int recordModuleCode;
	unsigned int recordCreditsPerSemester;
	unsigned int recordNumberOfSemesters;
	unsigned int recordTotalCredits;
	string recordModuleSummary;

public:
	 void moduleSummary()
	{
		 recordModuleSummary =
	}



	ModuleRecord(string moduleName, unsigned int moduleCode, string subjectArea = "COMP", unsigned int creditsPerSemester = 20 , unsigned int numberOfSemesters = 1)
	{
		recordModuleName = moduleName;
		recordSubjectArea = subjectArea;
		recordModuleCode = moduleCode;
		recordCreditsPerSemester = creditsPerSemester;
		recordNumberOfSemesters = numberOfSemesters;
		moduleSummary();
	}


};

