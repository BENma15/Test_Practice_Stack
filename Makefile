CXX = g++
CXXFLAGS = -Wall
OBJECTS = main.o
RM = rm -rf

stack: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp %.hpp
	$(CXX) -c $(CXXFLAGS) -o $@ $<

run: stack
	./stack

clean:
	$(RM) stack $(OBJECTS)

help:
	@echo "Available targets:"
	@echo "  stack    - Build the program (default)"
	@echo "  run      - Build and run the program"
	@echo "  clean    - Remove build artifacts"
	@echo "  help     - Show this help message"
