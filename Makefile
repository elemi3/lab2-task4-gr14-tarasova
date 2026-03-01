# Makefile for C project with structures
# This file automates the build process

# Target: program
# Builds the final executable from object files
# Depends on: build/main.o and build/student.o
program: build/main.o build/student.o
	# Link object files to create executable
	# $@ - target name (program)
	# $^ - all dependencies (build/main.o build/student.o)
	gcc -o $@ $^

# Target: build/main.o
# Compiles main.c into an object file
# Depends on: src/main.c
build/main.o: src/main.c
	# Create build directory if it doesn't exist
	# -p flag prevents error if directory already exists
	mkdir -p build
	# Compile main.c into object file
	# -c flag means compile only (no linking)
	# -o specifies output file name
	# $< is the first dependency (src/main.c)
	gcc -c -o $@ $<

# Target: build/student.o
# Compiles student.c into an object file
# Depends on: src/student.c
build/student.o: src/student.c
	# Create build directory if it doesn't exist
	mkdir -p build
	# Compile student.c into object file
	# $@ - target (build/student.o)
	# $< - first dependency (src/student.c)
	gcc -c -o $@ $<

# Target: clean
# Removes all compiled files and build directory
# No dependencies
clean:
	# Remove all object files and executable in current directory
	# -f flag ignores nonexistent files
	rm -f *.o program
	# Remove build directory and all its contents
	# -r flag removes recursively, -f ignores nonexistent files
	rm -rf build/