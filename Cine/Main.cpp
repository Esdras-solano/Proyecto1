#include <iostream>
#include <cstdlib>
#include "Cinema.h"
Cinema NuevaCinema;
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
void Mantenimiento(int optSubMenu, int quantityMovies) {
    
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
            NuevaCinema.insertRooms(quantityMovies);
            break;
        case 3:
            NuevaCinema.insertSchedule(quantityMovies);
            break;
        default:
            break;
        }
    } while (optSubMenu != 4);
}
void reserva() {

}
void venta() {

}
void menu(int optMenu, int optSubMenu, int quantityMovies) {
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
            Mantenimiento(optSubMenu, quantityMovies);
            break;

        case 3:
            
            break;

        case 4:
            
            break;
        default:
            break;
        }
    } while (optMenu != 5);
    NuevaCinema.~Cinema();
}

int main()
{
    int optMenu = 0, optSubMenu = 0, quantityMovies = 0;
    Cinema NuevaCinema;


   menu(optMenu, optSubMenu, quantityMovies);
   std::cout << std::endl;
   NuevaCinema.showMovies();

    return 0;
}
