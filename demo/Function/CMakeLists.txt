# CMakeList.txt : projet CMake pour Function, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

project ("Function")

# Ajoutez une source à l'exécutable de ce projet.
add_executable (Function "Function.cpp" "Function.h" "somePersonalFunction.cpp" "somePersonalFunction.h")

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
