#include "Movies.h"

Movies::Movies(): year(0), duration(0)
{
}

Movies::Movies(std::string _name, int _year, std::string _coutry, int _duration, std::string _review)
{
	this->name = _name;
	this->country = _coutry;
	this->review = _review;
	this->year = _year;
	this->duration = _duration;
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
