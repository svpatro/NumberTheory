# Define program directory

local =  ./Programs
exe = ./Executables

AA:
	g++ $(local)/src.cpp -o ./main
	./main

CayleyTable:
	g++ $(local)/CayleyTable.cpp -o $(exe)/ct.out
	$(exe)/ct.out

CosetMultiplier:
	g++ $(local)/CosetMultiplier.cpp -o $(exe)/cm.out
	$(exe)/cm.out

CyclicSubgroups:
	g++ $(local)/CyclicSubgroups.cpp -o $(exe)/cs.out
	$(exe)/cs.out

LagrangeTheorem:
	g++ $(local)/LagrangeTheorem.cpp -o $(exe)/lt.out
	$(exe)/lt.out

MultiplicativeInverses:
	g++ $(local)/MultiplicativeInverses.cpp -o $(exe)/mi.out
	$(exe)/mi.out

SubgroupCheck:
	g++ $(local)/SubgroupCheck.cpp -o $(exe)/sc.out
	$(exe)/sc.out

QuotientGroup: 
	g++ $(local)/QuotientGroup.cpp -o $(exe)/qg.out
	$(exe)/qg.out

clean:
	rm $(exe)/*.out
	rm main