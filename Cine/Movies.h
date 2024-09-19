#pragma once
#include <iostream>
class Movies
{
private:
	std::string name;
	int year;
	int duration;
	std::string country;
	std::string review;
	

public:
	Movies();
	Movies(std::string name, int year, std::string coutry, int duration, std::string review);
	
	void setMovieName(std::string mName);
	void setYearOfMovie(int mYear);
	void setDurationOfMovie(int mDuration);
	void setCountry(std::string mCountry);
	void setReview(std::string mReview);

	std::string getMovieName();
	int getYearOfMovie();
	std::string getCountry();
	int getDuratioOfMovie();
	std::string getReview();
};

