all:
	g++ main.cpp -o "out/main"

double:
	g++ main.cpp -o "out/main" -D T_DOUBLE

clean:
	rm out/main