#include "Schedule.h"

Schedule::Schedule()
{
}

Schedule::Schedule(std::string mDate, std::string mStartTime, std::string mEndTime)
{
	this->date = mDate;
	this->startTime = mStartTime;
	this->endTime = mEndTime;
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
