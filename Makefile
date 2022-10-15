COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)


$(PROGRAM): Car.cpp Employee.cpp Invoice.cpp LowEmissions.cpp main.cpp Moped.cpp Motorcycle.cpp Student.cpp Vendor.cpp Visitor.cpp
	$(COMPILER) $(OPTIONS) Car.cpp Employee.cpp Invoice.cpp LowEmissions.cpp main.cpp Moped.cpp Motorcycle.cpp Student.cpp Vendor.cpp Visitor.cpp -o $(PROGRAM)

clean:
	rm *.out