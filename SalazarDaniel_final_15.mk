SalazarDaniel_final_15.pdf: elemento.dat grafica_15.py
	python grafica_15.py

%.dat : a.out
	./a.out

a.out: punto15.cpp
	g++ punto15.cpp
