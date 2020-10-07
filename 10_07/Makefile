CXX= -std=c++17 -fconcepts

all: prof_example1.x prof_example2.x

%.x: %.cpp
	g++ $(CXX) $< -o $@

gprof: prof_example2.cpp
	g++ -pg $(CXX) $< -o prof_example2.x
	./prof_example2.x 10000 10000
	gprof ./prof_example2.x > profile.txt
	emacs profile.txt &

clean:
	rm rm -f *.x *.o a.out gmon.out
