#include "Movies.h"

Movies::Movies(): year(0), duration(0)
{
}

Movies::Movies(std::string mName, int mYear, std::string mCoutry, int mDuration, std::string mReview)
{
	this->name = mName;
	this->country = mCoutry;
	this->review = mReview;
	this->year = mYear;
	this->duration = mDuration;
}

void Movies::setMovieName(std::string mName)
{
	name = mName;
}

void Movies::setYearOfMovie(int mYear)
{
	year = mYear;
}

void Movies::setDurationOfMovie(int mDuration)
{
	duration = mDuration;
}

void Movies::setCountry(std::string mCountry)
{
	country = mCountry;
}

void Movies::setReview(std::string mReview)
{
	review = mReview;
}

std::string Movies::getMovieName()
{
	return name;
}

int Movies::getYearOfMovie()
{
	return year;
}

std::string Movies::getCountry()
{
	return country;
}

int Movies::getDuratioOfMovie()
{
	return duration;
}

std::string Movies::getReview()
{
	return review;
}
