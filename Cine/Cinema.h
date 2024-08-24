#pragma once
#include "Movies.h"
#include "Rooms.h"
#include "Schedule.h"

const int maxMovies = 7;
const int maxRoom = 7;
const int maxSchedule = 7;

class Cinema
{
private:
	Movies* movie = new Movies[maxMovies];
	Rooms* room = new Rooms[maxRoom];
	Schedule* schedule = new Schedule[maxSchedule];

public:
	Cinema();
	Cinema(Movies* _movies, Rooms* _rooms, Schedule* _schedule);
	~Cinema();

	void insertMovies(int quantity);
	void insertRooms(int quantity);
	void insertSchedule(int quantity);
	void showMovies();
};

