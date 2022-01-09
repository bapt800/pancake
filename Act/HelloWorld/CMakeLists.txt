# CMakeList.txt : projet CMake pour HelloWorld, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

project ("HelloWorld")

# Ajoutez une source à l'exécutable de ce projet.
add_executable (HelloWorld "HelloWorld.cpp" "HelloWorld.h")

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
