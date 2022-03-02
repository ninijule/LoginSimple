# CMakeList.txt : projet CMake pour Crypto, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

project ("Crypto")

# Ajoutez une source à l'exécutable de ce projet.
add_executable (Crypto   "Main.cpp"   "Personne.cpp" "Personne.hpp")

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
