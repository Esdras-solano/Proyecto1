#include "Schedule.h"

Schedule::Schedule()
{
}

Schedule::Schedule(std::string _date, std::string _startTime, std::string _endTime)
{
	this->date = _date;
	this->startTime = _startTime;
	this->endTime = _endTime;
}

void Schedule::setDate(std::string mDate)
{
	date = mDate;
}

void Schedule::setstartTime(std::string mStartTime)
{
	startTime = mStartTime;
}

void Schedule::setendTime(std::string mEndTime)
{
	endTime = mEndTime;
}

std::string Schedule::getDate()
{
	return date;
}

std::string Schedule::getstartTime()
{
	return startTime;
}

std::string Schedule::getendTime()
{
	return endTime;
}
