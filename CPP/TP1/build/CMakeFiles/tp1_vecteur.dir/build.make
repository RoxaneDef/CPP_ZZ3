# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rodeflandr/ZZ3/CPP/TP1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rodeflandr/ZZ3/CPP/TP1/build

# Include any dependencies generated for this target.
include CMakeFiles/tp1_vecteur.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tp1_vecteur.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp1_vecteur.dir/flags.make

CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.o: CMakeFiles/tp1_vecteur.dir/flags.make
CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.o: ../src/main_vecteur.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rodeflandr/ZZ3/CPP/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.o -c /home/rodeflandr/ZZ3/CPP/TP1/src/main_vecteur.cpp

CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rodeflandr/ZZ3/CPP/TP1/src/main_vecteur.cpp > CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.i

CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rodeflandr/ZZ3/CPP/TP1/src/main_vecteur.cpp -o CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.s

# Object files for target tp1_vecteur
tp1_vecteur_OBJECTS = \
"CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.o"

# External object files for target tp1_vecteur
tp1_vecteur_EXTERNAL_OBJECTS =

tp1_vecteur: CMakeFiles/tp1_vecteur.dir/src/main_vecteur.cpp.o
tp1_vecteur: CMakeFiles/tp1_vecteur.dir/build.make
tp1_vecteur: CMakeFiles/tp1_vecteur.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rodeflandr/ZZ3/CPP/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable tp1_vecteur"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp1_vecteur.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp1_vecteur.dir/build: tp1_vecteur

.PHONY : CMakeFiles/tp1_vecteur.dir/build

CMakeFiles/tp1_vecteur.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp1_vecteur.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp1_vecteur.dir/clean

CMakeFiles/tp1_vecteur.dir/depend:
	cd /home/rodeflandr/ZZ3/CPP/TP1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rodeflandr/ZZ3/CPP/TP1 /home/rodeflandr/ZZ3/CPP/TP1 /home/rodeflandr/ZZ3/CPP/TP1/build /home/rodeflandr/ZZ3/CPP/TP1/build /home/rodeflandr/ZZ3/CPP/TP1/build/CMakeFiles/tp1_vecteur.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp1_vecteur.dir/depend
