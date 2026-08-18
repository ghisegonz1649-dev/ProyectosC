# ProyectosC

Colección de programas en C++ desarrollados como práctica de estructuras de control, funciones, arreglos y menús interactivos por consola. El proyecto principal, **Plaza Neza**, integra varios módulos independientes (cajero automático, cine, restaurante y estacionamiento) en un solo menú, y se incluye además un juego de Gato (Tic-Tac-Toe) como programa aparte.

## Contenido del repositorio

| Archivo | Descripción |
|---|---|
| `Plaza.cpp` | Programa principal. Muestra un menú que da acceso a los demás módulos (Cajero, Cine, Restaurante, Estacionamiento). |
| `Cajero_automatico.cpp` / `.h` | Simula un cajero automático: consulta de saldo, depósitos y retiros. |
| `Cine.cpp` / `.h` | Sistema de venta y reserva de asientos de cine, cartelera y dulcería. |
| `Restaurante.cpp` / `.h` | Sistema de pedidos de un restaurante: menú, cálculo de costos, propina e IVA. |
| `Estacionamiento.cpp` / `.h` | Calcula el cobro de un estacionamiento según el tiempo de servicio. |
| `gato.cpp` | Juego de Gato (Tic-Tac-Toe) para dos jugadores, jugado por consola. |

## Requisitos

- Un compilador de C++ compatible con C++11 o superior (por ejemplo, [MinGW-w64](https://www.mingw-w64.org/) / GCC).
- Sistema operativo Windows (los programas usan `system("COLOR ...")`, un comando propio de la consola CMD de Windows).
- [Visual Studio Code](https://code.visualstudio.com/) (opcional) con la extensión de C/C++ — el repositorio incluye configuración en `.vscode/`.

## Compilación y ejecución

Puedes compilar cada archivo por separado con `g++`. Por ejemplo:

```bash
g++ Plaza.cpp Cajero_automatico.cpp Cine.cpp Restaurante.cpp Estacionamiento.cpp -o Plaza.exe
./Plaza.exe
```

Para el juego de Gato:

```bash
g++ gato.cpp -o gato.exe
./gato.exe
```

Si usas VS Code, puedes compilar y depurar directamente con la configuración incluida en `.vscode/launch.json`.

## Autora

- Mariam Ghise Juárez González
