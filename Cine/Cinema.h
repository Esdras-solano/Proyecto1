#pragma once
#include "Movies.h"
#include "Rooms.h"
#include "Schedule.h"

class Cinema
{
private:
	Movies* movie;
	Rooms* room;
	Schedule* schedule;
	int maxMovies;
	int maxRoom;
	int maxSchedule;

public:
	Cinema();
	Cinema(int maxMovie, int maxRoom, int maxSchedule);
	~Cinema();

	void insertMovies(int quantity);
	void insertRooms(int quantity);
	void roomInformation(int quantity);

	void insertSchedule(int quantity);
	void showMovies();
	void reservation(int &selectionMovie, int quantity, int &quantityTicket);


};