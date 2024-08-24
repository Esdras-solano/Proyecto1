#pragma once
#include <iostream>
class Schedule
{
private:
	std::string date;
	std::string startTime;
	std::string endTime;
public:
	Schedule();
	Schedule(std::string _date, std::string _startTime, std::string _endTime);

	void setDate(std::string mDate);
	void setstartTime(std::string mStartTime);
	void setendTime(std::string mEndTime);

	std::string getDate();
	std::string getstartTime();
	std::string getendTime();
};

