#include "Cinema.h"

Cinema::Cinema() 
{
	maxMovies = 7;
	maxRoom = 7;
	maxSchedule = 7;
	movie = new Movies[maxMovies];
	room = new Rooms[maxRoom];
	schedule = new Schedule[maxSchedule];
}

Cinema::Cinema(int maxMovie, int maxRoom, int maxSchedule)
{
	this->maxMovies = maxMovie;
	this->maxRoom = maxRoom;
	this->maxSchedule = maxSchedule;
	movie = new Movies[maxMovies];
	room = new Rooms[maxRoom];
	schedule = new Schedule[maxSchedule];
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
	if (quantity <= maxMovies) {
		for (int i = 0; i < quantity; i++) {

			std::cout << "Ingrese el nombre para la pelicula numero " << i << ": ";
			std::cin >> nombre;
			std::cout << "\ningrese el anio en que salio la pelicula numero " << i << ": ";
			std::cin >> anio;
			std::cout << "\nIngrese el pais de origen de la pelicula numero " << i << ": ";
			std::cin >> pais;
			std::cout << "\nIngrese la duracion en minutos de la pelicula numero " << i << ": ";
			std::cin >> duracion;
			std::cout << "\nIngrese el review del 0 al 10 para la pelicula numero " << i << ": ";
			std::cin >> resenia;

			movie[i] = Movies(nombre, anio, pais, duracion, resenia);
			system("cls");
		}
	}
}

void Cinema::insertRooms(int quantity)
{
	static int position = 0;
	int number, price, rows, cols;
	if (quantity <= maxRoom) {
		for (int i = 0; i < quantity; i++) {

			number = i;
			std::cout << "\ningrese la cantidad de filas de la sala " << i << ": ";
			std::cin >> rows;
			std::cout << "\ningrese la cantidad de columnas de la sala " << i << ": ";
			std::cin >> cols;
			std::cout << "\nIngrese el precio de la sala " << i << ": ";
			std::cin >> price;
			room[position].createRooms(number, price, rows, cols);
			position++;
			maxRoom--;
			

			system("cls");
		}
	}
	
}

void Cinema::roomInformation(int quantity)
{
		
		
		
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
		system("cls");
	}
	
}

void Cinema::showMovies()
{
	for (int i = 0; i < 2; i++) {
		room[i].showMatrixSeats();
	}
	
}

void Cinema::reservation(int &selectionMovie, int quantity, int &quantityTicket)
{
	int fila = 0, colum = 0;

	std::cout << "\nLas Peliculas disponibles para reservar son: " << std::endl;

	for (int i = 0; i < quantity; i++) {
		std::cout << i << "." << movie[i].getMovieName();
		std::cout << std::endl;
	}
	std::cout << "\nSeleccione la pelicula que desea: " << std::endl;
	std::cin >> selectionMovie;

	std::cout << "\nSala en la que se presentara la pelicula: " << room[selectionMovie].getRoomNumber() << std::endl;
	std::cout << "Fecha en la que se presentara la pelicula: " << schedule[selectionMovie].getDate() << std::endl;
	std::cout << "Hora de inicio: " << schedule[selectionMovie].getstartTime() << std::endl;
	std::cout << "Hora de finalizacion: " << schedule[selectionMovie].getendTime() << std::endl;

	std::cout << "\nCuantos entradas desea reservar: ";
	std::cin >> quantityTicket; std::cout << std::endl;

	std::cout << "A continuacion se mostraran los asientos disponibles, los 0 son los libres y los 1 los reservados: "; std::cout << std::endl;
	room[selectionMovie].showMatrixSeats();

	for (int i = 0; i < quantityTicket; i ++) {

		std::cout << "seleccione la fila y columan donde quiere reservar el tiquete: "; std::cout << std::endl;
		std::cin >> fila;
		std::cin >> colum;
		std::cout << std::endl;

		room[selectionMovie].reserveSeatMatrix(fila, colum);
		std::cout << std::endl;
	}

	room[selectionMovie].showMatrixSeats();
	std::cout << "Asientos reservados, el total de los tiquetes es: " << room[selectionMovie].getPrice() * quantityTicket << std::endl;
}

