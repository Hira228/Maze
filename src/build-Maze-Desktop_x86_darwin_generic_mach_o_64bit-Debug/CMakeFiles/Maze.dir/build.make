# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/antoinco/A1_Maze-1/src/View

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Maze.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Maze.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Maze.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Maze.dir/flags.make

CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o: CMakeFiles/Maze.dir/flags.make
CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o: Maze_autogen/mocs_compilation.cpp
CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o: CMakeFiles/Maze.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o -c /Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Maze_autogen/mocs_compilation.cpp

CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Maze_autogen/mocs_compilation.cpp > CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.i

CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Maze_autogen/mocs_compilation.cpp -o CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.s

CMakeFiles/Maze.dir/main.cpp.o: CMakeFiles/Maze.dir/flags.make
CMakeFiles/Maze.dir/main.cpp.o: /Users/antoinco/A1_Maze-1/src/View/main.cpp
CMakeFiles/Maze.dir/main.cpp.o: CMakeFiles/Maze.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Maze.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Maze.dir/main.cpp.o -MF CMakeFiles/Maze.dir/main.cpp.o.d -o CMakeFiles/Maze.dir/main.cpp.o -c /Users/antoinco/A1_Maze-1/src/View/main.cpp

CMakeFiles/Maze.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maze.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/antoinco/A1_Maze-1/src/View/main.cpp > CMakeFiles/Maze.dir/main.cpp.i

CMakeFiles/Maze.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maze.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/antoinco/A1_Maze-1/src/View/main.cpp -o CMakeFiles/Maze.dir/main.cpp.s

CMakeFiles/Maze.dir/View.cpp.o: CMakeFiles/Maze.dir/flags.make
CMakeFiles/Maze.dir/View.cpp.o: /Users/antoinco/A1_Maze-1/src/View/View.cpp
CMakeFiles/Maze.dir/View.cpp.o: CMakeFiles/Maze.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Maze.dir/View.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Maze.dir/View.cpp.o -MF CMakeFiles/Maze.dir/View.cpp.o.d -o CMakeFiles/Maze.dir/View.cpp.o -c /Users/antoinco/A1_Maze-1/src/View/View.cpp

CMakeFiles/Maze.dir/View.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maze.dir/View.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/antoinco/A1_Maze-1/src/View/View.cpp > CMakeFiles/Maze.dir/View.cpp.i

CMakeFiles/Maze.dir/View.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maze.dir/View.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/antoinco/A1_Maze-1/src/View/View.cpp -o CMakeFiles/Maze.dir/View.cpp.s

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o: CMakeFiles/Maze.dir/flags.make
CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o: /Users/antoinco/A1_Maze-1/src/Controller/Controller.cc
CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o: CMakeFiles/Maze.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o -MF CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o.d -o CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o -c /Users/antoinco/A1_Maze-1/src/Controller/Controller.cc

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/antoinco/A1_Maze-1/src/Controller/Controller.cc > CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.i

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/antoinco/A1_Maze-1/src/Controller/Controller.cc -o CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.s

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o: CMakeFiles/Maze.dir/flags.make
CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o: /Users/antoinco/A1_Maze-1/src/Model/Model.cc
CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o: CMakeFiles/Maze.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o -MF CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o.d -o CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o -c /Users/antoinco/A1_Maze-1/src/Model/Model.cc

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/antoinco/A1_Maze-1/src/Model/Model.cc > CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.i

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/antoinco/A1_Maze-1/src/Model/Model.cc -o CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.s

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o: CMakeFiles/Maze.dir/flags.make
CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o: /Users/antoinco/A1_Maze-1/src/Model/Maze.cc
CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o: CMakeFiles/Maze.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o -MF CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o.d -o CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o -c /Users/antoinco/A1_Maze-1/src/Model/Maze.cc

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/antoinco/A1_Maze-1/src/Model/Maze.cc > CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.i

CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/antoinco/A1_Maze-1/src/Model/Maze.cc -o CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.s

# Object files for target Maze
Maze_OBJECTS = \
"CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Maze.dir/main.cpp.o" \
"CMakeFiles/Maze.dir/View.cpp.o" \
"CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o" \
"CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o" \
"CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o"

# External object files for target Maze
Maze_EXTERNAL_OBJECTS =

Maze.app/Contents/MacOS/Maze: CMakeFiles/Maze.dir/Maze_autogen/mocs_compilation.cpp.o
Maze.app/Contents/MacOS/Maze: CMakeFiles/Maze.dir/main.cpp.o
Maze.app/Contents/MacOS/Maze: CMakeFiles/Maze.dir/View.cpp.o
Maze.app/Contents/MacOS/Maze: CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Controller/Controller.cc.o
Maze.app/Contents/MacOS/Maze: CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Model.cc.o
Maze.app/Contents/MacOS/Maze: CMakeFiles/Maze.dir/Users/antoinco/A1_Maze-1/src/Model/Maze.cc.o
Maze.app/Contents/MacOS/Maze: CMakeFiles/Maze.dir/build.make
Maze.app/Contents/MacOS/Maze: /usr/local/lib/QtWidgets.framework/Versions/A/QtWidgets
Maze.app/Contents/MacOS/Maze: /usr/local/lib/QtGui.framework/Versions/A/QtGui
Maze.app/Contents/MacOS/Maze: /usr/local/lib/QtCore.framework/Versions/A/QtCore
Maze.app/Contents/MacOS/Maze: CMakeFiles/Maze.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Maze.app/Contents/MacOS/Maze"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Maze.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Maze.dir/build: Maze.app/Contents/MacOS/Maze
.PHONY : CMakeFiles/Maze.dir/build

CMakeFiles/Maze.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Maze.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Maze.dir/clean

CMakeFiles/Maze.dir/depend:
	cd /Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/antoinco/A1_Maze-1/src/View /Users/antoinco/A1_Maze-1/src/View /Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Users/antoinco/A1_Maze-1/src/build-Maze-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles/Maze.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Maze.dir/depend

