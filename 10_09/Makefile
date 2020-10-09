CXX = g++
CXXFLAGS = -g -std=c++17 -fconcepts
GPROFLAGS = -pg
CACHEGRIND_FLAGS = 
CALLGRIND_FLAGS = 

all: example.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	./$@ 5000 6000

gprof: example.cpp
	$(CXX) $(CXXFLAGS) $(GPROFLAGS) $< -o example_gprof.x
	./example_gprof.x 5000 6000
	gprof ./example_gprof.x > gprof_report.txt

callgrind: example.cpp
	$(CXX) $(CXXFLAGS) $< -o example.x
	valgrind --tool=callgrind ./example.x 5000 6000
	callgrind_annotate $$(ls -t callgrind.out.* | head -n 1) > callgrind_report.txt

cachegrind: example.cpp
	$(CXX) $(CXXFLAGS) $< -o example.x
	valgrind --tool=cachegrind ./example.x 5000 6000
	cg_annotate $$(ls -t cachegrind.out.* | head -n 1) > cachegrind_report.txt

clean:
	rm -f *.x a.out gmon.out
