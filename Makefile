CXX = g++
CXXFLAGS = -Iinclude
TARGET = rroulette
SRC = $(wildcard src/*c*)
OBJ = $(patsubst src/%.cpp,src/%.o,$(patsubst src/%.c,src/%.o,$(SRC)))
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)
clean:
	rm -f $(OBJ) $(TARGET)
run:
	sudo ./$(TARGET)
