#include <iostream>
#include <string>
#include <windows.h>
#include "Node.h"
#include "List.h"

bool Menu()
{
    List list;
    int opc = 0;
    std::string song = "";
    int position = 0;
    bool close = false;

    std::cout << "" << std::endl;
        std::cout << "          Menu de opciones          " << std::endl;
        std::cout << "1. Agregar nueva cancion." << std::endl;
        std::cout << "2. Ver la lista de canciones." << std::endl;
        std::cout << "3. Buscar una cancion en especifico." << std::endl;
        std::cout << "4. Ver cantidad de canciones en la lista." << std::endl;
        std::cout << "5. Cambiar una canción de posición." << std::endl;
        std::cout << "6. Eliminar una cancion." << std::endl;
        std::cout << "7. Eliminar la playlist y salir." << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Elija una opción" << std::endl;
        std::cin >> opc;

        switch(opc)
        {
            case 1:
                {
                std::cout << "Ha elegido agregar una nueva cancion" << std::endl;
                std::cout << "Ingrese el nombre de la cancion: " << std::endl;
                std::cin >> song;

                Node* node = new Node(song);

                list.Add(node);

                std::cout << "Se agrego la cancion correctamente." << std::endl;
                return false;
                }
            case 2:
                std::cout << "Ha elegido ver la lista de canciones" << std::endl;
                std::cout << "" << std::endl;
                list.Read();
                std::cout << "" << std::endl;
                std::cout << "Fin de la playlist." << std::endl;
                return false;
            case 3:
                std::cout << "Ha elegido buscar una cancion en especifico." << std::endl;
                std::cout << "Ingrese el nombre de la cancion que desea buscar" << std::endl;
                std::cout << "OJO: Debe ingresar el nombre exacto o no tendrá resultado." << std::endl;
                std::cin >> song;
                list.Contains(song);
                return false;
            case 4:
                std::cout << "Ha elegido ver la cantidad de canciones de la playlist." << std::endl;
                std::cout << "" << std::endl;
                std::cout << "Esta playlist contiene " << list.Count() << " canciones" << std::endl;
                return false;
            case 5:
                std::cout << "Ha elegido mover una cancion de posicion." << std::endl;
                std::cout << "OJO: Debe ingresar el nombre exacto o no tendrá resultado." << std::endl;
                std::cout << "Ingrese la cancion: " << std::endl;
                std::cin >> song;
                std::cout << "Ingrese la posicion a la cual la quiere mover:" << std::endl;
                std::cin >> position;

                list.Edit(position, song);
                return false;
            case 6:
                std::cout << "Ha elegido eliminar una cancion." << std::endl;
                std::cout << "OJO: Debe ingresar el nombre exacto o no tendrá resultado." << std::endl;
                std::cout << "Ingrese la cancion: " << std::endl;
                std::cin >> song;

                list.Remove(song);
                return false;
            case 7:
                std::cout << "Ha elegido destruir la playlist." << std::endl;
                std::cout << "" << std::endl;
                list.Destroy();
                std::cout << "La playlist se ha destruido con exito." << std::endl;
                return true;
            default:
                std::cout << "No se ha podido reconocer la opcion ingresada, intente otra vez." << std::endl;
                return false;
        };
        return false;
};

int main()
{
    List list;
    char opc = '_';
    std::string song = "";
    int position = 0;
    bool close = true;

    std::cout << "Bienvenido a su reproductor de musica Rodryfy" << std::endl;
    std::cout << "En seguida se le presentará un menú con opciones para" << std::endl;
    std::cout << "gestionar su musica." << std::endl;

    do
    {
        
        std::cout << "" << std::endl;
        std::cout << "          Menu de opciones          " << std::endl;
        std::cout << "1. Agregar nueva cancion." << std::endl;
        std::cout << "2. Ver la lista de canciones." << std::endl;
        std::cout << "3. Buscar una cancion en especifico." << std::endl;
        std::cout << "4. Ver cantidad de canciones en la lista." << std::endl;
        std::cout << "5. Cambiar una canción de posición." << std::endl;
        std::cout << "6. Eliminar una cancion." << std::endl;
        std::cout << "7. Eliminar la playlist y salir." << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Elija una opción" << std::endl;
        std::cin >> opc;

        switch(opc)
        {
            case '1':
                {
                std::cout << "Ha elegido agregar una nueva cancion" << std::endl;
                std::cout << "Ingrese el nombre de la cancion: " << std::endl;
                std::cin >> song;

                Node* node = new Node(song);

                list.Add(node);

                std::cout << "Se agrego la cancion correctamente." << std::endl;
                break;
                }
            case '2':
                std::cout << "Ha elegido ver la lista de canciones" << std::endl;
                std::cout << "" << std::endl;
                list.Read();
                std::cout << "" << std::endl;
                std::cout << "Fin de la playlist." << std::endl;
                break;
            case '3':
                std::cout << "Ha elegido buscar una cancion en especifico." << std::endl;
                std::cout << "Ingrese el nombre de la cancion que desea buscar" << std::endl;
                std::cout << "OJO: Debe ingresar el nombre exacto o no tendrá resultado." << std::endl;
                std::cin >> song;
                list.Contains(song);
                break;
            case '4':
                std::cout << "Ha elegido ver la cantidad de canciones de la playlist." << std::endl;
                std::cout << "" << std::endl;
                std::cout << "Esta playlist contiene " << list.Count() << " canciones" << std::endl;
                break;
            case '5':
                std::cout << "Ha elegido mover una cancion de posicion." << std::endl;
                std::cout << "OJO: Debe ingresar el nombre exacto o no tendrá resultado." << std::endl;
                std::cout << "Ingrese la cancion: " << std::endl;
                std::cin >> song;
                std::cout << "Ingrese la posicion a la cual la quiere mover:" << std::endl;
                std::cin >> position;

                list.Edit(position, song);
                break;
            case '6':
                std::cout << "Ha elegido eliminar una cancion." << std::endl;
                std::cout << "OJO: Debe ingresar el nombre exacto o no tendrá resultado." << std::endl;
                std::cout << "Ingrese la cancion: " << std::endl;
                std::cin >> song;

                list.Remove(song);
                break;
            case '7':
                std::cout << "Ha elegido destruir la playlist." << std::endl;
                std::cout << "" << std::endl;
                list.Destroy();
                std::cout << "La playlist se ha destruido con exito." << std::endl;
                close = false;
                break;
            default:
                std::cout << "No se ha podido reconocer la opcion ingresada, intente otra vez." << std::endl;
                break;
        };
    }while(close);

    return 0;
};