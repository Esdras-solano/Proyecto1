#include "Cinema.h"

Cinema::Cinema()
{
}

Cinema::Cinema(Movies* _Movies, Rooms* _Rooms, Schedule* _Schedule)
{
	this->movie = _Movies;
	this->room = _Rooms;
	this->schedule = _Schedule;
}

Cinema::~Cinema()
{
	delete[] movie;
	delete[] room;
	delete[] schedule;
}

void Cinema::insertMovies(int quantity)
{
	std::string nombre, pais, resenia;
	int anio, duracion;
	for (int i = 0; i < quantity; i++) {

		std::cout << "Ingrese el nombre para la pelicula numero " << i << ": ";
		std::cin >> nombre;
		std::cout << "\ningrese el año en que salio la pelicula numero " << i << ": ";
		std::cin >> anio;
		std::cout << "\nIngrese el país de origen de la pelicula numero " << i << ": ";
		std::cin >> pais;
		std::cout << "\nIngrese la duracion en minutos de la pelicula numero " << i << ": ";
		std::cin >> duracion;
		std::cout << "\nIngrese el revio del 0 al 10 para la pelicula numero " << i << ": ";
		std::cin >> resenia;

		movie[i] = Movies(nombre, anio, pais, duracion, resenia);
	}
}

void Cinema::insertRooms(int quantity)
{
	int number, seats, price;
	for (int i = 0; i < quantity; i++) {

		number = i;
		std::cout << "\ningrese la cantidad de butacas de la sala " << i << ": ";
		std::cin >> seats;
		std::cout << "\nIngrese el precio de la sala " << i << ": ";
		std::cin >> price;
		room[i] = Rooms(number, seats, price);
	}
}

void Cinema::insertSchedule(int quantity)
{
	std::string dates, startime, endTime;

	for (int i = 0; i < quantity; i++) {

		std::cout << "\ningrese la fecha de la pelicula " << movie[i].getMovieName() << ": ";
		std::cin >> dates;
		std::cout << "\ningrese la hora de inicio de la pelicula " << movie[i].getMovieName() << ": ";
		std::cin >> startime;
		std::cout << "\nIngrese la hora de finalizacion de la pelicula " << movie[i].getMovieName() << ": ";
		std::cin >> endTime;
		schedule[i] = Schedule(dates, startime, endTime);
	}
}

void Cinema::showMovies()
{
	std::cout << room[0].getRoomNumber();
}
