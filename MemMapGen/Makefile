CXX=g++

CXXFLAGS=-std=gnu++11 -Wall -Wextra -ggdb

main: main.o memory_map.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./main

main.o: main.cpp memory_map.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

memory_map.o: memory_map.cpp memory_map.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<


clean:
	rm -rf *.o main