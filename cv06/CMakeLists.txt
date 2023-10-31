# CMakeList.txt: Projekt CMake pro cv06, sem přidejte logiku zdrojového
# kódu a definic specifickou pro projekt.
#

# Přidejte zdrojový kód ke spustitelnému souboru tohoto projektu.
add_executable (cv06 "cv06.cpp" "cv06.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cv06 PROPERTY CXX_STANDARD 20)
endif()

# TODO: V případě potřeby přidejte testy a cíle instalace.
