# Define program directory

local =  ./Programs

CayleyTable:
	g++ $(local)/CayleyTable.cpp -o ./ct 

CosetMultiplier:
	g++ $(local)/CosetMultiplier.cpp -o ./cm

CyclicSubgroups:
	g++ $(local)/CyclicSubgroups.cpp -o ./cs

LagrangeTheorem:
	g++ $(local)/LagrangeTheorem.cpp -o ./lt

MultiplicativeInverses:
	g++ $(local)/MultiplicativeInverses.cpp -o ./mi

SubgroupCheck:
	g++ $(local)/SubgroupCheck.cpp -o ./sc

QuotientGroup: 
	g++ $(local)/QuotientGroup.cpp -o ./qg