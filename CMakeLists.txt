# CMakeList.txt: Projekt CMake pro Battleship, sem přidejte logiku zdrojového
# kódu a definic specifickou pro projekt.
#
cmake_minimum_required (VERSION 3.8)

# Přidejte zdrojový kód ke spustitelnému souboru tohoto projektu.
add_executable (Battleship "Battleship.cpp" "Battleship.h"  "Zadavani.cpp" "Zadavani.h" "Herni_rezim.h" "Herni_rezim.cpp")

# TODO: V případě potřeby přidejte testy a cíle instalace.
