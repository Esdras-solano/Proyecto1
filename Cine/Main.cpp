#include <iostream>
#include <cstdlib>
#include "Cinema.h"

void archivo(int optSubMenu) {
    do{
        std::cout << "\n1. Acerca de" << std::endl;
        std::cout << "2. Salir" << std::endl;
        std::cout << "3. Volver al menu principal" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> optSubMenu;

        switch (optSubMenu)
        {
        case 1:
            std::cout << "Esdras";
            break;
        case 2:
            exit(0);
            break;
        default:
            break;
        }
    } while (optSubMenu != 3);
}
void mantenimiento(Cinema &NuevaCinema, int optSubMenu, int &quantityMovies, int quantityRoom, int quantitySchedule) {
    do {
        std::cout << "1. Peliculas" << std::endl;
        std::cout << "2. Salas" << std::endl;
        std::cout << "3. Horarios" << std::endl;
        std::cout << "4. Volver al menu principal" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> optSubMenu;

        std::cout << std::endl;
        switch (optSubMenu)
        {
        case 1:
            std::cout << "Cuantas peliculas desea agregar?: ";
            std::cin >> quantityMovies;
            std::cout << std::endl;
            NuevaCinema.insertMovies(quantityMovies);
            break;
        case 2:
            std::cout << "Cuantas salas desea agregar?: ";
            std::cin >> quantityRoom;
            NuevaCinema.insertRooms(quantityRoom);
            std::cout << std::endl;
            break;
        case 3:
            std::cout << "Cuantos horarios desea agregar?: ";
            std::cin >> quantitySchedule;
            NuevaCinema.insertSchedule(quantitySchedule);
            break;
        default:
            break;
        }
    } while (optSubMenu != 4);
}
void menu() {
    Cinema NuevaCinema;
    int optMenu = 0, optSubMenu = 0, quantityMovies = 0, selectionMovie = 0, quantityRoom = 0, quantitySchedule = 0, quantityTicket = 0;
    do {
        std::cout << "Bienvenido a Nueva Cinema" << std::endl;
        std::cout << "1. Archivo" << std::endl;
        std::cout << "2. Mantenimiento" << std::endl;
        std::cout << "3. Reserva" << std::endl;
        std::cout << "4. Ventas" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> optMenu;
        std::cout << std::endl; 

        system("cls");

        switch (optMenu)
        {
        case 1:
            archivo(optSubMenu);
            break;

        case 2:
            mantenimiento(NuevaCinema, optMenu, quantityMovies, quantityRoom, quantitySchedule);
            break;

        case 3:
            NuevaCinema.reservation(selectionMovie, quantityMovies, quantityTicket);
            std::cout << "\n";
            break;

        case 4:
            
            break;
        default:
            break;
        }
    } while (optMenu != 5);
  
}

int main()
{
   
    

    menu();
   std::cout << std::endl;

   
    return 0;
}
