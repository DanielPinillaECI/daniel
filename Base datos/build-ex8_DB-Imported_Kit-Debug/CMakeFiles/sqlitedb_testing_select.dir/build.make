# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/ex8_DB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/build-ex8_DB-Imported_Kit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/sqlitedb_testing_select.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sqlitedb_testing_select.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sqlitedb_testing_select.dir/flags.make

CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.o: CMakeFiles/sqlitedb_testing_select.dir/flags.make
CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.o: /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/ex8_DB/select_db.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/build-ex8_DB-Imported_Kit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.o -c /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/ex8_DB/select_db.cpp

CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/ex8_DB/select_db.cpp > CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.i

CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/ex8_DB/select_db.cpp -o CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.s

# Object files for target sqlitedb_testing_select
sqlitedb_testing_select_OBJECTS = \
"CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.o"

# External object files for target sqlitedb_testing_select
sqlitedb_testing_select_EXTERNAL_OBJECTS =

sqlitedb_testing_select: CMakeFiles/sqlitedb_testing_select.dir/select_db.cpp.o
sqlitedb_testing_select: CMakeFiles/sqlitedb_testing_select.dir/build.make
sqlitedb_testing_select: CMakeFiles/sqlitedb_testing_select.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/build-ex8_DB-Imported_Kit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sqlitedb_testing_select"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sqlitedb_testing_select.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sqlitedb_testing_select.dir/build: sqlitedb_testing_select

.PHONY : CMakeFiles/sqlitedb_testing_select.dir/build

CMakeFiles/sqlitedb_testing_select.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sqlitedb_testing_select.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sqlitedb_testing_select.dir/clean

CMakeFiles/sqlitedb_testing_select.dir/depend:
	cd /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/build-ex8_DB-Imported_Kit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/ex8_DB /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/ex8_DB /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/build-ex8_DB-Imported_Kit-Debug /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/build-ex8_DB-Imported_Kit-Debug /home/sergiocaballero/Documents/proyecto/ALSE2120/base_de_datos/ALSE2120/build-ex8_DB-Imported_Kit-Debug/CMakeFiles/sqlitedb_testing_select.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sqlitedb_testing_select.dir/depend

